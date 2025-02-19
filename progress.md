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
