#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {
    int x = 5 + 3;
    printf("5 + 3 = %d\n", x);

    x = 5 - 3;
    printf("5 - 3 = %d\n", x);

    x = 5 * 3;
    printf("5 * 3 = %d\n", x);

    float y = 5 / 3;
    printf("5 / 3 = %f\n", y);

    int negated_x = -x;
    printf("Negated x = %d\n", negated_x);

    __complex__ double z = 1.0 + 2 * I;
    printf("z = %f + %f i\n", creal(z), cimag(z));

    return 0;
}