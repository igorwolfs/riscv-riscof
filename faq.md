# TODO
- Add an axi-master to the CPU
	- Needs to be set in the control-unit?
	- Needs to have multiple cycles?
- Add an axi-slave to the data-memory
- Add an axi-slave to the instruction-memory

### Separate axi-master for instruction-memory and data-memory
- The instruction fetch determines what the data-bus needs to do.
- So if the data-bus is still busy executing a previous instruction, that instruction needs to be stored somewhere while the data-bus executes it.

For some instructions it will take longer to execute than others
- ALU instruction simply 1 cycle.
- Memory fetch-add to PC instruction will take multiple cycles.
	- Memory needs to be fetched
	- PC needs to be incremented with the memory-fetched
	- PC needs to be set

So sometimes we'll need to introduce a delay into the PC update, depending on which instruction was fetched.


### Instruction AXI-bus
- The axi bus address valid should be set

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
