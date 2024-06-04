#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *expand_to_base_b(int n, int b)
{
    int *results = malloc(sizeof(int) * 32); // Allocate memory for results array
    assert(b > 1);

    int q = n,
        k = 0;

    while (q != 0)
    {
        results[k] = q % b,
        q /= b,
        ++k;
    }

    return results;
}

int main()
{
    int numeric_base, value_to_expand, scan_status;

    printf("Enter the number to expand: ");
    scan_status = scanf("%d", &value_to_expand);

    if (scan_status != 1)
    {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    printf("Enter the base to expand to: ");
    scan_status = scanf("%d", &numeric_base);

    if (scan_status != 1)
    {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    int *expanded_values = expand_to_base_b(value_to_expand, numeric_base);

    for (int i = sizeof(expanded_values) - 1; i >= 0; i--)
        printf(" %d |", expanded_values[i]);

    free(expanded_values);

    printf("\n");

    return 0;
}
