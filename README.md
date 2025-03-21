# RISCV_CORE

This repository is a port of the "RISCOF RISC-V Architectural Test Framework". to test the riscv_core processor for compatibility to the RISC-V ISA.
Sail is used as the reference model. The implementation of the riscv-testing framework was based on the [neorv32-riscof](https://github.com/stnolting/neorv32-riscof) testing framework implementation.

## Setup

Check the riscof documentation [here](https://riscof.readthedocs.io/en/stable/installation.html)

## Running the tests
```bash
riscof run --config=config.ini --suite=riscv-arch-test/riscv-test-suite/ --env=riscv-arch-test/riscv-test-suite/env
```
- Creates "dut" folders under each test-folder in riscof_work.
- Executes all tests in series.

### YAML validation
```bash
riscof validateyaml --config=config.ini
```
Generates:
- DUT-yaml check file 
- REF-yaml check file

### test generation
```bash
riscof testlist --config=config.ini --suite=riscv-test-suite/ --env=riscv-test-suite/env
```
- invokes yaml validation check
- generates test_list
- generates list of tests under rv32i_m

# Plugin
## SP initialization
```a
#define RVMODEL_BOOT       \
    lui  t0, 0x40000;      \
    addi t0, t0, -16;       \
    mv   sp, t0;
```
By default the stack pointer in the model is set to 0x3FFFFFF0, the data-memory section is contained between 0x00000000 and 0x3FFFFFF0.

## Writing signature file
The signature file is written through 
```a
#define RVMODEL_HALT                                   \
    signature_dump:                                    \
      la   a0, begin_signature;                        \
      la   a1, sig_end_canary;                         \
      addi a1, a1, 4;                                   \
      li   a2, 0xF0000000;                             \
    signature_dump_loop:                               \
      bge  a0, a1, signature_dump_end;                 \
      lw   t0, 0(a0);                                  \
      sw   t0, 0(a2);                                  \
      addi a0, a0, 4;                                  \
      j    signature_dump_loop;                        \
    signature_dump_end:                                \
      li   a0, 0xF0000004;                             \
      li   a1, 0xCAFECAFE;                             \
    terminate_simulation:                              \
      sw   a1, 0(a0);                                  \
      j    terminate_simulation
```
Which loads data written into the data-section by the tests and writes it to address 0xF0000000.
Writing to address 0xF0000004 stops the simulation.

Addresses 0xF0000000-0xF0000007 are handled by the axi_file_handler-peripheral.
