#include <stdio.h>

int main()
{

    int config;
    float vi;
    printf("Escolha um dos investimentos\n1 - Poupanca\n2 - Fundos de renda fixa\n");
    scanf("%d", &config);
    if (config != 1 && config != 2)
    {
        printf("Opcao invalida");
        return 0;
    }
    printf("Indique o valor de investimento: ");
    scanf("%f", &vi);

    if (config == 1)
    {
        printf("O total da poupanca eh de: %.2f", vi * 1.03);
    }
    else if (config == 2)
    {
        printf("o total do fundo de renda fixa eh de: %.2f", vi * 1.04);
    }

    return 0;
}