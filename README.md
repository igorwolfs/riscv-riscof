# RISCV_CORE

This repository is a port of the "RISCOF RISC-V Architectural Test Framework". to teest the riscv_core processor for compatibility to the RISC-V ISA.
Sail is used as the reference model.

## Setup

Check the riscof documentation [here] (https://riscof.readthedocs.io/en/stable/installation.html)

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
