#include <stdio.h>

int foo(void) {};

int main()
{
    int x = 5;
    int y;
    int *x_pointer = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", &x);

    y = *x_pointer;
    printf("Value of y: %d\n", y);

    int (*fp1)(void) = foo;  // unecessary and not portable
    int (*fp2)(void) = &foo; // also unecessary and not portable

    printf("Address of foo: %p\n", foo);
    printf("Address of foo: %p\n", &foo);
    printf("Address of foo: %p\n", fp1);

    return 0;
}