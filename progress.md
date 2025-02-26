# Progress
Goal of this repo is to track current progress in setting up the riscof tests for my riscv processor.

## Selecting appropriate architecture through a yaml file
- https://riscv-config.readthedocs.io/en/latest/yaml-specs.html
- Simplest architecture will start with RV32I-architecture. SO that should be changed.

The command to run for the simulator is:
First remove the M, A-instructions so the instructions to focus on are the core-instructions.


## Documenting testing repo with the 2 simulators
### 1. Converting assembly to binary instructions
Inside riscof_work a bunch of folders appear, named similarly to the riscv-test-suite rv32e_m/M-assembly files.

Each file contains
- a .rpt file
- a mulh-01.log-file
- a ref.cgf file
- a ref.disass-file, ref.elf file containing the disassembled version of the test-binary
- a ref.md file (with the results of the tests)
- a reference-sail_c_simulator.signature file.

Let's try however to make it run only add, subtract and these kinds of tests, since those are the ones we'll need.
The runTests-function needs to be called with a different argument in that case

### 2. Loading the binary instructions to the emulator
### 3. Reading the memory dump

# Process
## validating yaml
```bash
riscof validateyaml --config=config.ini
```
Generates in riscof_work:
- DUT-yaml check file 
- REF-yaml check file

## Generating test-list

```bash
riscof testlist --config=config.ini --suite=riscv-test-suite/ --env=riscv-test-suite/env
```
- invokes yaml validation check
- generates test_list
- generates list of tests under rv32i_m

## Run tests
```bash
riscof run --config=config.ini --suite=riscv-arch-test/riscv-test-suite/ --env=riscv-arch-test/riscv-test-suite/env
```
- It creates "dut" folders under each test-folder in riscof_work
- This executes all the test commands in parallel(as an example for the simple integer instructions in case of the spike-simulator DUT).

```bash
cd /home/iwolfs/bin/risc5/riscv-arch-test/riscof_work/rv32i_m/I/src/sw-align-01.S/dut; 
riscv32-unknown-elf-gcc -march=rv32i          -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g         -T /home/iwolfs/bin/risc5/riscv-arch-test/spike_simple/env/link.ld         -I /home/iwolfs/bin/risc5/riscv-arch-test/spike_simple/env/         -I /home/iwolfs/bin/risc5/riscv-arch-test/riscv-test-suite/env /home/iwolfs/bin/risc5/riscv-arch-test/riscv-test-suite/rv32i_m/I/src/sw-align-01.S -o my.elf  -DTEST_CASE_1=True -DXLEN=32 -mabi=ilp32 ; 
spike -m8796093022208 --isa=rv32i +signature=/home/iwolfs/bin/risc5/riscv-arch-test/riscof_work/rv32i_m/I/src/sw-align-01.S/dut/DUT-spike.signature +signature-granularity=4 my.elf;
spike -m8796093022208 --isa=rv32i --log-commits -l my.elf 2> /home/iwolfs/bin/risc5/riscv-arch-test/riscof_work/rv32i_m/I/src/sw-align-01.S/dut/DUT-spike.log;
```

### Command 1
Go to the dut-directory in the relevant sub-directory of the test.

```bash
cd /home/iwolfs/bin/risc5/riscv-arch-test/riscof_work/rv32i_m/I/src/sw-align-01.S/dut;
```

### Command 2: compilation
Generates my.elf from in this case for example: sw-align-01.S using the riscv32-bit toolchain with rv32i-architecture.

- TEST_STORE is a custom macro that generates store-word instructions

check "test_macros.h" for more info.

```bash
riscv32-unknown-elf-gcc -march=rv32i          -static -mcmodel=medany -fvisibility=hidden -nostdlib -nostartfiles -g         -T /home/iwolfs/bin/risc5/riscv-arch-test/spike_simple/env/link.ld         -I /home/iwolfs/bin/risc5/riscv-arch-test/spike_simple/env/         -I /home/iwolfs/bin/risc5/riscv-arch-test/riscv-test-suite/env /home/iwolfs/bin/risc5/riscv-arch-test/riscv-test-suite/rv32i_m/I/src/sw-align-01.S -o my.elf  -DTEST_CASE_1=True -DXLEN=32 -mabi=ilp32 ;
```

### Command 3: Passing the elf-file to the spike-emulator
Creates a spike emulation object with 869... bytes of memory.


```bash
    spike -m8796093022208 --isa=rv32i +signature=/home/iwolfs/bin/risc5/riscv-arch-test/riscof_work/rv32i_m/I/src/sw-align-01.S/dut/DUT-spike.signature +signature-granularity=4 my.elf;
```
This outputs a file called: DUT-spike.signature, containing 70 lines with a 4-byte number. These indicates the signature memory locations that need to be written to after the test.

**Signature-option:**

- _start_signature / _end_signature -> range between which
- Dumps 4-bytes (granularity-4) per line in hex thanks to the signature option.

```assembly
signature_x2_0:
    .fill 0*(XLEN/32),4,0xdeadbeef
```
- Defines the label "signature_x2_0 for a memory address.
- fills the region of memory with a (repeat, size, value)
    - repeat: 0
    - So size: 4
    - value: 0xdeadbeef

-> SO in this case 0 words are in fact allocated.

The test-code will write the results to memory after this label.
Spike looks for the rvtest_sig_begin and rvtest_sig_end symbols, which it will then dump as a signature.
This signature / labels will be compared to the reference, after which the test will pass or fail.


### Command 4: 
```bash
spike -m8796093022208 --isa=rv32i --log-commits -l my.elf 2> /home/iwolfs/bin/risc5/riscv-arch-test/riscof_work/rv32i_m/I/src/sw-align-01.S/dut/DUT-spike.log;
```

Outputs a bunch of logs to the DUT-spike.log file.

# Errors
### Error spike not found:


```bash
INFO | Running Tests on DUT.
ERROR | /bin/sh: 1: spike: not found
```
**Solution:**

Make sure to install spike and add it to path / somehow reference it inside the plugin.

###  Error: misa {'reset-val': ['reset value does not match with extensions enabled']}

#### Misa register
Is a read-only register reporting the ISA supported by the processor.

**Solution:** 
use
- https://docs.amd.com/r/2024.1-English/ug1629-microblaze-v-user-guide/Machine-ISA-Register-misa
- https://tomeko.net/online_tools/bin_to_32bit_hex.php?lang=en


To set the register equal to the instruction set defined in the isa.yaml file.

# The way other risc5 simulations tackle this process
The main question is: how do other risc5 verification testbenches handle this process?
- Do they have a bootloader that simply loads everything into memory?
- Do they just load everything raw from a file into memory into memory and perform the tests?
- Do they have some kind-of jtag-protocol that loads everything into memory without cpu intervention?

It seems like the only RISC5 core that uses an opensource simulator is neorv32. So let's start with that one.

## NEORV32
Comparison between the methodology they use here and thoughts about integrating it to mine.
### Making the simulation
- Installing sail simulator which we shuold get from here: https://github.com/riscv/sail-riscv

- Sail is accessible
on running ./build_simulators I get
- execute_process error getting child return code: No such file or directory

- So they already exist apparently, try creating symbolic links and seee if that fixes it.

It seems like what happens is the data gets loaded into memory through passing "MEM_FILE".

### Loading-into-memory functionality
#### Load function
It seems like this loads a file into memory from 

```systemverilog
impure function mem8_bv_init_f(file_name : string; num_words : natural; byte_sel : natural) return mem8_bv_t is
```

It seems like this loads the whole memory in separate chunks of 8-bits as follows "mem8_bv_1, mem8_bv_2, mem8_bv_3, mem8_bv_4".

Then it writes data directly into memory using something named "xbus"
```vhdl
port map (
    -- Global control --
    clk_i      => clk_gen,
    rstn_i     => rst_gen,
    -- External bus interface (available if XBUS_EN = true) --
    xbus_adr_o => xbus.addr,
    xbus_dat_i => xbus.rdata,
    xbus_dat_o => xbus.wdata,
    xbus_we_o  => xbus.we,
    xbus_sel_o => xbus.sel,
    xbus_stb_o => xbus.stb,
    xbus_cyc_o => xbus.cyc,
    xbus_ack_i => xbus.ack,
    xbus_err_i => '0'
);

  -- external bus interface --
  type xbus_t is record
    addr  : std_ulogic_vector(31 downto 0);
    wdata : std_ulogic_vector(31 downto 0);
    rdata : std_ulogic_vector(31 downto 0);
    we    : std_ulogic;
    sel   : std_ulogic_vector(03 downto 0);
    stb   : std_ulogic;
    cyc   : std_ulogic;
    ack   : std_ulogic;
  end record;
```

Which is the entity neorv32_xbus.

We connect to the neorv32_top.vhd using the wishbone bus:
```vhdl
-- External bus interface (available if XBUS_EN = true) --
xbus_adr_o     : out std_ulogic_vector(31 downto 0);                    -- address
xbus_dat_o     : out std_ulogic_vector(31 downto 0);                    -- write data
xbus_tag_o     : out std_ulogic_vector(2 downto 0);                     -- access tag
xbus_we_o      : out std_ulogic;                                        -- read/write
xbus_sel_o     : out std_ulogic_vector(3 downto 0);                     -- byte enable
xbus_stb_o     : out std_ulogic;                                        -- strobe
xbus_cyc_o     : out std_ulogic;                                        -- valid cycle
xbus_dat_i     : in  std_ulogic_vector(31 downto 0) := (others => 'L'); -- read data
xbus_ack_i     : in  std_ulogic := 'L';                                 -- transfer acknowledge
xbus_err_i     : in  std_ulogic := 'L';      
```

This is connected to the XBUS interface:
```vhdl

    -- External Bus Interface (XBUS) --
    neorv32_xbus_enabled:
    if XBUS_EN generate

      -- external bus gateway (XBUS) --
      neorv32_xbus_inst: entity neorv32.neorv32_xbus
      generic map (
        TIMEOUT_VAL => XBUS_TIMEOUT,
        REGSTAGE_EN => XBUS_REGSTAGE_EN
      )
      port map (
        clk_i      => clk_i,
        rstn_i     => rstn_sys,
        bus_req_i  => xcache_req,
        bus_rsp_o  => xcache_rsp,
        xbus_adr_o => xbus_adr_o,
        xbus_dat_i => xbus_dat_i,
        xbus_dat_o => xbus_dat_o,
        xbus_tag_o => xbus_tag_o,
        xbus_we_o  => xbus_we_o,
        xbus_sel_o => xbus_sel_o,
        xbus_stb_o => xbus_stb_o,
        xbus_cyc_o => xbus_cyc_o,
        xbus_ack_i => xbus_ack_i,
        xbus_err_i => xbus_err_i
      );
```

This seems to be an external bus interface that is available when the variable XBUS_EN is set to true.

This xbus is described in neorv32_xbus.vhd.

NOTE: all non-internal memory addresses accessed are accessed through the wishbone interface.

So what happens is probably all the memory is simply external, the wishbone interface is the only memory interface and the instruction memory as well as the data memory is fetched through it.

The main question here is how do we create a similar memory interface that can be used by our processor to fetch instructions and data from?

### How is the instruction memory and data memory fetched using the wishbone interface in the neorv32?


### Error: gcc permission denied
   ERROR | make: gcc: Permission denied
make: *** [makefile:23: ../neorv32/sw/image_gen/image_gen] Error 127
   ERROR | Using custom simulation arguments:
   ERROR | ./neorv32_riscof_tb.vhd:45:14:error: cannot open file: ./main.hex
    file     text_file   : text open read_mode is file_name;
             ^

It seems like the .vhd testbench has no permission to load the file into memory.

Fixed permissions, everything works.

# Assembly code description
```C
/**** fixed length LA macro; alignment and rvc/norvc unknown before execution ****/
#define LA(reg,val)     ;\
    .ifnc(reg, X0)       ;\
        .option push    ;\
        .option rvc     ;\
        .align UNROLLSZ ;\
        .option norvc   ;\
        la reg,val      ;\
        .align UNROLLSZ ;\
        .option pop     ;\
    .endif
    
/* RVTEST_SIGBASE(reg, label) initializes to label and clears offset */
#define RVTEST_SIGBASE(_R,_TAG)			;\
  LA(_R,_TAG)					;\
  .set offset,0
```
Loads the address from the _TAG into _R.
