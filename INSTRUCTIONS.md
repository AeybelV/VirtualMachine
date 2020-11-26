# Virtual Machine Information

## Language Op Codes

| Op Code             | Usage          | Description
| --------------------| ---------------| ------------
| HLT (x00)           |                | Halts program
| NOP (x01)           |                | No Operation
| PUSH (x02)          | PUSH $VALUE    | Pushes a value to the stack
| POP (x03)           |                | Pops a number off the stack
| iADD (x04)          |                | Pops last two integers off stack off stack, adds, and pushes result.
| iSUB (x05)          |                | Pops last two integers off stack, subtracts, and pushes result.
| iMUL (x06)          |                | Pops last two integers off stack, multiplies, and pushes result.
| iDIV (x07)          |                | Pops last two integers off stack, TT_OPCODEides, and pushes result.
| iPRINT (x08)        |                | Prints the last integer off the stack, does not pop.
