#include <stdio.h>

int main() {
    int x = 47;
    printf("Before left shifting: x = %d\n", x);

    x = x << 1;
    printf("After left shifting: x = %d\n", x);

    int y = 47;
    printf("Before right shifting: y = %d\n", y);

    y = y >> 1;
    printf("After right shifting: y = %d\n", y);

    return 0;
}