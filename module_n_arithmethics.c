#include <stdio.h>

int main()
{
    char options[4][15] = {"Somar", "Multiplicar", "Dividir", "Sair"};
    char option_operand;
    int option, integer_set, scan_status;
    int is_invalid_option = 0;

    printf("Bem vindo à calculadora de aritmética modular.\n");
    printf("Selecione uma opção abaixo: ");

    for (int i = 0; i < 4; i++)
        printf("Option %d: %s\n", i + 1, options[i]);

    printf("Sua opção: ");
    scan_status = scanf("%d", &option);

    if (scan_status == 0)
        return 1;

    is_invalid_option = option > 4 || option < 1;

    while (is_invalid_option)
    {
        printf("Opção inválida. Tente novamente: ");
        scan_status = scanf("%d", &option);

        if (scan_status == 0)
            return 1;

        is_invalid_option = option > 4 || option < 1;
    }

    if (option == 4)
        return 0;

    printf("Digite o conjunto de inteiros: ");
    scan_status = scanf("%d", &integer_set);

    if (scan_status == 0)
        return 1;

    int max_operand = integer_set - 1,
        modulo_headers[max_operand],
        modulo_results[max_operand][max_operand];

    for (int i = 0; i < integer_set; i++)
        modulo_headers[i] = i;

    switch (option)
    {
    case 1:
        option_operand = '+';

        for (int i = 0; i < integer_set; i++)
            for (int j = 0; j < integer_set; j++)
                modulo_results[i][j] = (i + j) % integer_set;

        break;

    case 2:
        option_operand = '*';

        for (int i = 0; i < integer_set; i++)
            for (int j = 0; j < integer_set; j++)
                modulo_results[i][j] = (i * j) % integer_set;
        break;

    case 3:
        option_operand = '/';

        printf("Em breve. Por favor, aguarde.");

        break;
    }

    printf("%s |", &option_operand);

    for (int i = 0; i < integer_set; i++)
        printf(" %d ", modulo_headers[i]);

    printf("\n");
}