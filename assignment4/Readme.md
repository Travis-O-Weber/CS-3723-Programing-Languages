Modular Summation Programs

Description

This project consists of multiple C programs that compute the sum, sum of squares, and sum of cubes of integer inputs using different programming approaches. The goal is to compare various methods of handling summation while considering memory management, thread safety, and call-by-name semantics.

Prerequisites

GCC Compiler (e.g., MinGW for Windows or GCC on Linux/macOS)

Basic knowledge of C programming

Files Included

modsum1.c - Uses three separate static functions for different summations.
modsum2.c - Uses global static variables to store sums.
modsum3.c - Uses a struct with static allocation to store sums.
modsum4.c - Uses a struct passed by reference.
modsum5.c - Uses a dynamically allocated struct.
modsum6.c - Uses three integer pointers to store sums.
modsum7.c - Uses a macro for summation computation.
modsum8.c - Uses an integer array to store sums.
sum.txt   - Contains analysis on thread safety and call-by-name properties.

Compilation and Execution

To compile and run any of the implementations:

Open a terminal or command prompt.

Navigate to the project directory.

Compile the desired file using GCC:

gcc -Wall modsumX.c -o modsumX

(Replace X with the appropriate number, e.g., modsum1 for modsum1.c.)

Run the compiled program:

./modsumX num1 num2 num3 ...

Notes

Thread Safety: modsum1.c and modsum2.c are unsafe in multi-threaded contexts due to shared state.

Call-by-Name Approximation: modsum7.c is the closest to call-by-name since C lacks true call-by-name semantics.

Memory Management: modsum5.c uses dynamic memory allocation and requires explicit freeing to avoid leaks.
