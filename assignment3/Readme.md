Assignment 3 - Dynamic Scope Emulation in C

Description

This assignment explores the difference between static and dynamic scope in C. The provided C program has been modified to emulate dynamic scope by passing variable addresses instead of using global variables.

Prerequisites

GCC Compiler (e.g., MinGW for Windows or GCC on Linux/macOS)

Basic knowledge of C programming

Files Included

assignment3.docx    # Assignment instructions and output validation
main.c              # Modified C program with dynamic scope emulation

Compilation and Execution

Open a terminal or command prompt.

Navigate to the project directory containing main.c.

Compile the program with:

gcc -Wall main.c -o assignment3

Run the compiled program:

./assignment3

Expected Output

The program should produce the following output, emulating dynamic scope:

f: a=15 b=25 c=45
g: a=15 b=25 c=45
main: a=15 b=25 c=45

Notes

The original program used global variables, which were moved inside main().

Functions now receive pointers to variables to modify their values indirectly.

The -Wall flag ensures all warnings are shown, making debugging easier.

