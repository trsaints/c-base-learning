#include <stdio.h>

int main()
{
    int p = 0,
        factor = 1,
        scan_result = 0,
        remainder = 0,
        complement = 1,
        is_congruent = 0;

    printf("Verifique se um número é primo através do Teorema de Wilson.\n");
    printf("Digite um número: ");

    scan_result = scanf("%d", &p);

    if (scan_result != 1)
    {
        printf("Entrada inválida.\n");

        return 1;
    }

    if (p <= 1)
    {
        printf("Entrada inválida. Insira um número maior que 1.\n");

        return 1;
    }

    for (int i = p - 1; i >= 1; i--)
        factor *= i;

    complement = factor + 1;
    remainder = complement % p;

    if (remainder == 0)
        is_congruent = 1;

    printf("(%d - 1)! ≡ -1 (mod %d)?\n", p, p);
    printf("(%d - 1)! = %d\n", p, factor);
    printf("%d ≡ -1 (mod %d)?\n", factor, p);
    printf("%d - (-1) = %d\n", factor, complement);
    printf("%d ≡ 0 (mod %d)? ", complement, p);

    if (is_congruent)
        printf("Sim. ∴ O número %d é primo.\n", p);
    else
        printf("Não. ∴ O número %d não é primo.\n", p);

    return 0;
}