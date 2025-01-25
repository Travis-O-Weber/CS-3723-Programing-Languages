/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

static int x = 0;   // Sum
static int y = 0;   // Sum squares
static int z = 0;   // Sum cubes

static void sum2(int argc, char *argv[]) {
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    x += num;
    y += num * num;
    z += num * num * num;
  }
}

int main(int argc, char *argv[]) {
  sum2(argc, argv);
  printf("Sum=%d Sum2=%d Sum3=%d\n", x, y, z);
  return 0;
}