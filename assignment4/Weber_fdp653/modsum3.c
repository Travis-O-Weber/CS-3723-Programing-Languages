/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int x;   // Sum
  int y;   // Sum squares
  int z;   // Sum cubes
} sum_t;

static sum_t *sum3(int argc, char *argv[]) {
  static sum_t sum = {0, 0, 0}; // initialize the structure
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    sum.x += num;
    sum.y += num * num;
    sum.z += num * num * num;
  }
  return &sum;
}

int main(int argc, char *argv[]) {
  sum_t *m = sum3(argc, argv);
  printf("Sum=%d Sum2=%d Sum3=%d\n", m->x, m->y, m->z);
  return 0;
}