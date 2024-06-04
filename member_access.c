#include <stdio.h>

struct fish
{
    int length;
    int weight;
};

int main() {
    struct fish salmon;
    struct fish *fish_pointer = &salmon;

    fish_pointer->length = 10;
    salmon.weight = 9;

    printf("Salmon length: %d\n", fish_pointer->length);
    printf("Salmon weight: %d\n", salmon.weight);
}