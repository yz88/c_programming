#include <stdio.h>
#include <stdlib.h>

int main()
{
    // we create an integer variable a
    int a = 101;
    // and take the address of it to get an integer pointer
    // '*' declares var as pointer
    int *ap = &a;
    // and take the address of that to get
    // a pointer to an integer pointer
    int **app = &ap;
    // and take the address of that to get
    // a pointer to a pointer to an integer pointer
    int ***appp = &app;

    // we can print the variable directly
    printf("a: %d\n", a);
    // that pointer point to address
    printf("&a: %x is memory address of 'a'\n", &a);
    printf("ap: %x pointer of a points also the memory address of 'a'\n", ap);
    // or by dereferencing the integer pointer once
    printf("*ap: %d\n", *ap);
    // ... or the pointer to the integer pointer twice
    printf("**app: %d\n", **app);
    // ... or the pointer to the pointer to the integer pointer three
    // times
    printf("***app: %d\n", ***appp);
}