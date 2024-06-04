#include <stdio.h>

#define maxint(a, b)       \
    ({                     \
        int _a = a,        \
            _b = b;        \
        _a > _b ? _a : _b; \
    })

int main()
{
    int a,
        b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    int absolute = ({
        int x = maxint(a, b),
            z;

        if (x > 0)
            z = x;
        else
            z = -x;

        z;
    });

    printf("The absolute value of the maximum of %d and %d is %d\n", a, b, absolute);
}