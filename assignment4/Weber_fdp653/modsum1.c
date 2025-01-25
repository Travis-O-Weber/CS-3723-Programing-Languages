/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

static int sum1(int argc, char *argv[]) {
  int sum = 0;
  for (int i = 1; i < argc; i++) {
    sum += atoi(argv[i]);
  }
  return sum;
}

static int sum2(int argc, char *argv[]) {
  int sum = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    sum += num * num;
  }
  return sum;
}

static int sum3(int argc, char *argv[]) {
  int sum = 0;
  for (int i = 1; i < argc; i++) {
    int num = atoi(argv[i]);
    sum += num * num * num;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  int x = sum1(argc, argv);
  int y = sum2(argc, argv);
  int z = sum3(argc, argv);

  printf("Sum=%d Sum2=%d Sum3=%d\n", x, y, z);
  return 0;
}