<<<<<<< HEAD
# CACT compiler skeleton

## using antlr4 to generate files from grammar file

```bash
java -jar ../deps/antlr-4.13.1-complete.jar -Dlanguage=Cpp CACT.g4 -visitor -no-listener
```

## compile the cmake project

```bash
mkdir -p build
cd build
cmake ..
make -j
./compiler ../test/samples_lex_and_syntax/00_true_main.cact
```
=======
# UCAS-Compiler-Lab
UCAS-Compiler-Lab
>>>>>>> a6a997671ba842ee164bfff46b628a2b0a0b310e
