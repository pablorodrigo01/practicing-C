#include <stdio.h>

int main()
{
    char np[10][100];
    int i, cp[10];
    float pp[10], pa[10];

    for (i = 0; i < 2; i++)
    {
        printf("Insira o nome do %d%c produto: ", i + 1, 248);
        scanf("%s", &np[i]);
        printf("Insira o codigo do produto: ");
        scanf("%d", &cp[i]);
        printf("Insira o valor do produto: ");
        scanf("%f", &pp[i]);
        if (cp[i] % 2 == 0 && pp[i] > 1000.00)
        {
            pa[i] = pp[i] * 1.25;
        }
        else if (cp[i] % 2)
        {
            pa[i] = pp[i] * 1.15;
        }
        else if (pp[i] > 1000.00)
        {
            pa[i] = pp[i] * 1.10;
        }
    }
    for (i = 0; i < 2; i++)
    {
        printf("%d%c - Nome: %s, Codigo: %d, Preco: %.2f, Novo Preco: %.2f\n", i + 1, 248, np[i], cp[i], pp[i], pa[i]);
    }

    return 0;
}