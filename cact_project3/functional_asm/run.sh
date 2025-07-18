#!/bin/bash

# 检查是否提供参数
if [ $# -ne 1 ]; then
    echo "用法: $0 <数字00-32>"
    exit 1
fi

# 获取输入参数
num=$(printf "%02d" $1)

# 检查输入是否在00-32之间
if ! [[ "$num" =~ ^[0-3][0-9]$ ]] || [ "$num" -gt 32 ]; then
    echo "错误：请输入00到32之间的数字"
    exit 1
fi

# 执行命令
./compiler ../test/functional/$num.cact
riscv64-unknown-linux-gnu-gcc -c $num.S -o $num.o
riscv64-unknown-linux-gnu-gcc $num.o -L. -lmylib -o $num -static
qemu-riscv64 ./$num; echo $?
