#!/bin/bash

dir="../test/test_semantic"
command="./compiler"

# 遍历目录
for file in "$dir"/*
do  
    if [ -f "$file" ]
    then
        echo "Test on file: $file"

        output=$(eval "$command \"$file\"")
        exit_code=$?
        
        # 打印输出
        echo "Output:"
        echo "$output"
    fi
done