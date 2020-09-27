# CakeLang

CakeLang is an assembly-like programming language that I have written as an educational experience and interesting side project for me.

The language is compiled into bytecode that can be executed by the CakeLang Virtual Machine, which is the runtime for executing CakeLang bytecode.

The CLVM is designed to be a stack based machine. At the moment it support only integers, and for now will only deal with 8 bit numbers.

## Details

- [CakeLang](#cakelang)
  - [Details](#details)
  - [TODO's](#todos)
    - [Compiler](#compiler)
    - [Runtime](#runtime)

[INSTRUCTIONS.md](INSTRUCTIONS.md) contains details about the CakeLang executable and contains a table of opcodes.

## TODO's

### Compiler

- [x] Create a basic lexer
- [ ] Write the token parser
- [ ] Compile parsed tokens to CakeLang bytecode
- [ ] Implement basic control flow instructions

### Runtime

- [ ] Needs to be written
- [ ] Implement basic control flow instructions
