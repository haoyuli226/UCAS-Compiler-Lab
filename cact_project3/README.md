# CACT compiler skeleton

## using antlr4 to generate files from grammar file

```bash
java -jar ../deps/antlr-4.13.1-complete.jar -Dlanguage=Cpp CACT.g4 -no-visitor -listener
```

## compile the cmake project

```bash
mkdir -p build
cd build
cmake ..
make -j
./compiler ../test/functional/00.cact
riscv64-unknown-linux-gnu-gcc -c 00.S -o 00.o
riscv64-unknown-linux-gnu-gcc 00.o -L. -lmylib -o 00 -static
qemu-riscv64 ./00;echo $?
```
