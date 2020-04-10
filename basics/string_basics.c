#include <stdio.h>
#include <string.h>

int main()
{
    // Strings are actually one - dimensional array of characters
    // terminated by a null character '\0'.
    // When the compiler encounters a sequence of characters enclosed 
    // in the double quotation marks, it appends a null character
    // '\0' at the end by default.
    char a[] = "hello";
    char b[6] = "hello";
    // Here, we are trying to assign 6 characters (the last character
    // is '\0') to a char array having 5 characters. This is bad and
    // you should never do this.
    char c[5] = "hello";
    // when using curly brackets the compiler expects '\0' at the end
    char d[] = {'b', 'e', 'l', 'l', 'o', '\0'};
    // don't do this, always use '\0' at the end whne using curly brackets
    char e[] = {'h', 'e', 'l', 'l', 'o'};

    printf("a: \"%s\"\n", a);
    printf("a[0]: %d\n", a[0]);
    printf("a[5]: %d\n", a[5]);
    printf("len: %d\n\n", strlen(a));
    printf("b: \"%s\"\n", b);
    printf("len: %d\n\n", strlen(b));
    printf("c: \"%s\"\n", c);
    printf("len: %d\n\n", strlen(c));
    printf("d: \"%s\"\n", d);
    printf("len: %d\n\n", strlen(d));
    printf("e: \"%s\"\n", e);
    printf("len: %d\n\n", strlen(e));

    return 0;
}