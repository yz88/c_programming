#include <stdio.h>

int main()
{
    // With this method we create a string that we can only read
    // pointer to string
    char *a = "hello";
    // If we want to define a string that can also be changed, we 
    // have to define it as a local character array:
    char b[] = "hello";

    printf("a: \"%s\"\n", a);
    printf("b: \"%s\"\n", b);
    b[0] = 'b';
    printf("b: \"%s\"\n", b);
    // will end up in segmentation fault
    a[0] = 'c';
    printf("a: \"%s\"\n", a);

    return 0;
}