# Virtual Machine Information

## Executable Header

The executables run by the VM all contain this header

| Name  | Description| Size
|-------|------------|------
| Magic Number | The value 0x7E434B45 | 4 Bytes
| Bitmode | 8 bit: 0xa, 16 bit: 0xb, 32 bit: 0xc, 64 bit: 0xd| 1 byte
| Program Start | Location of entry point | Varies
| Header End | The value 0x434B457E | 4 bytes

## Language Op Codes

| Instruction   | Usage          | Description
| --------------| ---------------| ------------
| HLT           |                |Halts program
| NOP           |                | No Operation
| PUSH          | PUSH $VALUE    |Pushes a number to the stack
| POP           | POP            |Pops a number off the stack
| ADD           |                |Pops number off stack, adds, and pushes result
| SUB           |                |Pops number off stack, subtracts, and pushes result
| MUL           |                |Pops number off stack, multiplies, and pushes result
| DIV           |                |Pops number off stack, divides, and pushes result
| PRINT         |                |Prints the last value off the stack
