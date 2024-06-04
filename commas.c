#include <stdio.h>

int main() {
    for (int x = 1, y = 10; x <= 10 && y >= 1; x++, y--)
        printf("%d | %d\n", x, y);

    return 0;
}