# CakeLang

CakeLang is an assembly-like programming language that I have written as an educational experience and interesting side project for me.

The language is assembled into bytecode that can be executed by the CakeLang Virtual Machine, which is the runtime for executing CakeLang bytecode.

The CLVM is designed to be a stack based machine. At the moment it support only integers, and for now will only deal with 8 bit numbers.

## Details

- [CakeLang](#cakelang)
  - [Details](#details)
  - [Building](#building)
  - [TODO's](#todos)
    - [Assembler](#assembler)
    - [Runtime](#runtime)

[INSTRUCTIONS.md](INSTRUCTIONS.md) contains details about the CakeLang executable and contains a table of opcodes.

## Building

Build the assembler by running `make build_assembler_production` and the runtime by running `build_runtime_production`.

Test out the language yourself by assembling the test.cks file.

``` sh
bake_cake test.cks
```

This will produce a CakeLang executable called "output.cke". Execute this file by running

```sh
cake output.cke
```

## TODO's

### Assembler

- [x] Create a basic lexer
- [x] Write the token parser
- [x] Compile parsed tokens to CakeLang bytecode
- [ ] Implement basic control flow instructions

### Runtime

- [x] Implement execution of basic integer arithmetic instructions.
- [ ] Implement basic control flow instructions
