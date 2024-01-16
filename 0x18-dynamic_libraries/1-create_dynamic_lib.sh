#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

echo "Dynamic library liball.so has been created."

