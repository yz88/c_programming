#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    // pointer to 'a' 
    int *ap_style_one = &a;
    // pointer to 'a' also
    int* ap_style_two = &a;

    printf("ap_style_one: %x\n", ap_style_one);
    printf("ap_style_two: %x\n", ap_style_two);

    // char in 'c' is a single charaxter
    char c = 'A';
    printf("char: %d\n", c);

    // string is an array of chars
    char *sp_style_one = "String Pointer Style 'char *'";
    char* sp_style_two = "String Pointer Style 'char*'";

    printf("sp_style_one: %x\n", sp_style_one);
    printf("string: %s\n",sp_style_one);
    printf("First char of string %d\n", sp_style_one[0]);
    printf("First char of string %s\n", itoa(sp_style_one[0]));
    printf("sp_style_two: %x\n", sp_style_two);
    printf("string: %s\n", sp_style_two);
}