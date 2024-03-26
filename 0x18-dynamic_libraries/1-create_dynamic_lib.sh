#!/bin/bash

# Collect all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile and create object files for each .c file
object_files=""
for file in $c_files; do
    object_file="${file%.c}.o"
    gcc -c -fPIC "$file" -o "$object_file"
    object_files+=" $object_file"
done

# Create the dynamic library
gcc -shared -o liball.so $object_files

# Clean up the object files
rm -f $object_files
