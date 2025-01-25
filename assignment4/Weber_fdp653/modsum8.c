/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

// sums[0] is sum, [1] is sum squares, [2] is sum cubes
static void sum8(int argc, char *argv[], int *sums) {
  sums[0] = 0;
  sums[1] = 0;
  sums[2] = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    sums[0] += num;
    sums[1] += num * num;
    sums[2] += num * num * num;
  }
}

int main(int argc, char *argv[]) {
  int sums[3];  // sums[0] is sum, [1] is sum squares, [2] is sum cubes
  sum8(argc, argv, sums);
  printf("Sum=%d Sum2=%d Sum3=%d\n", sums[0], sums[1], sums[2]);
  return 0;
}