#include <stdio.h>
#include <stddef.h>

static const int values[] = {1, 2, 3, 4, 5};

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int main(int arc, char *argv[])
{

    for (size_t i = 0; i < ARRAY_SIZE(values); i++)
        printf("values[%zu] = %d\n", i, values[i]);

    return 0;
}