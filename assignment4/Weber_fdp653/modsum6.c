/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

static void sum6(int argc, char *argv[], int *x, int *y, int *z) {
  *x = 0;
  *y = 0;
  *z = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    *x += num;
    *y += num * num;
    *z += num * num * num;
  }
}

int main(int argc, char *argv[]) {
  int x, y, z;
  sum6(argc, argv, &x, &y, &z);
  printf("Sum=%d Sum2=%d Sum3=%d\n", x, y, z);
  return 0;
}