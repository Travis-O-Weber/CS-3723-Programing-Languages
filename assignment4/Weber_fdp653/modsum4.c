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

static void sum4(int argc, char *argv[], sum_t *sum) {
  sum->x = 0;
  sum->y = 0;
  sum->z = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    sum->x += num;
    sum->y += num * num;
    sum->z += num * num * num;
  }
}

int main(int argc, char *argv[]) {
  sum_t m = {0, 0, 0}; // initialize the structure
  sum4(argc, argv, &m);
  printf("Sum=%d Sum2=%d Sum3=%d\n", m.x, m.y, m.z);
  return 0;
}