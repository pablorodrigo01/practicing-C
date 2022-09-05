#include <stdio.h>

int main()
{

    float n1, n2;
    int config;

    printf("Escolha uma das operacoes\n1 - Media entre os numeros\n2 - Diferenca do maior pelo menor\n3 - Produto entre os numeros\n");
    scanf("%d", &config);
    if (config != 1 && config != 2 && config != 3)
    {
        printf("Opcao invalida");
        return 0;
    }
    printf("Indique o primeiro numero: ");
    scanf("%f", &n1);
    printf("Indique o segundo numero: ");
    scanf("%f", &n2);

    if (config == 1)
    {
        printf("A media eh de: %.2f", (n1 + n2) / 2);
    }
    else if (config == 2)
    {
        if (n1 > n2)
        {
            printf("A diferenca eh de: %.2f", n1 - n2);
        }
        else if (n2 > n1)
        {
            printf("A diferenca eh de: %.2f", n2 - n1);
        }
    }
    else if (config == 3)
    {
        printf("O produto eh de: %.2f", n1 * n2);
    }

    return 0;
}