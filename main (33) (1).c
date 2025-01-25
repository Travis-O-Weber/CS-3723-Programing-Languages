/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void f(int *a, int *b, int *c) {
    (*a) += 5;
    (*b) += 5;
    (*c) += 5;
    printf("f: a=%d b=%d c=%d\n", *a, *b, *c);
}

void g(int *a, int *b, int *c) {
    int c_local = 40;
    (*b) += 5;
    c_local += 5;
    f(a, b, &c_local);
    printf("g: a=%d b=%d c=%d\n", *a, *b, c_local);
}

int main(int argc, char *argv[]) {
    int a = 10;
    int b = 20;
    int c = 30;

    g(&a, &b, &c);
    printf("main: a=%d b=%d c=%d\n", a, b, c);

    return 0;
}
