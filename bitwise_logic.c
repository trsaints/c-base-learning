#include <stdio.h>

int main()
{
    unsigned int foo = 11001001 & 10011011,
                 bar = 11001001 | 10011011,
                 foobar = 11001001 ^ 10011011,
                 foobarfoo = ~11001001;

    printf("foo = %d\n", foo);
    printf("bar = %d\n", bar);
    printf("foobar = %d\n", foobar);
    printf("foobarfoo = %d\n", foobarfoo);

    return 0;
}