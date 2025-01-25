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

static sum_t *sum5(int argc, char *argv[]) {
  sum_t *sum = (sum_t *) malloc(sizeof(sum_t));
  if (sum == NULL) {
    return NULL; // return NULL if malloc failed
  }

  sum->x = 0;
  sum->y = 0;
  sum->z = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    sum->x += num;
    sum->y += num * num;
    sum->z += num * num * num;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  sum_t *m = sum5(argc, argv);
  if (m == NULL) {
    fprintf(stderr, "Memory allocation failed!\n");
    return 1;
  }

  printf("Sum=%d Sum2=%d Sum3=%d\n", m->x, m->y, m->z);
  free(m); // free the allocated memory
  return 0;
}