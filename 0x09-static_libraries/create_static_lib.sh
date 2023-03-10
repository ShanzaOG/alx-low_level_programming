#!/bin/bash
# Collect all .c files in the current directory
SOURCE_FILES=$(find . -maxdepth 1 -name "*.c")

# Compile each source file into an object file
for SOURCE_FILE in $SOURCE_FILES; do
    gcc -c $SOURCE_FILE
done

# Archive all object files into a static library
ar rcs liball.a *.o
