#include <stdio.h>

int main()
{

    int i, qf = 0, qm = 0;
    float p[2], m = 0;
    char n[2][100];

    for (i = 0; i < 2; i++)
    {
        printf("Insira o nome do %d%c produto: ", i + 1, 248);
        scanf("%s", &n[i]);
        printf("Insira o preco do produto: ");
        scanf("%f", &p[i]);
        if (p[i] < 50.00)
        {
            qf++;
        }
        else if (p[i] > 100.00)
        {
            m = m + p[i];
            qm++;
        }
    }
    printf("Quantidade de produtos com preco inferior a R$ 50,00\n%d\n", qf);
    printf("Nome(s) do(s) produto(s) com preco entre R$ 50,00 a R$ 100,00\n");
    for (i = 0; i < 2; i++)
    {
        if (p[i] >= 50.00 && p[i] <= 100.00)
        {
            printf("%s\n", n[i]);
        }
    }
    if (m > 0)
    {
        printf("Media dos preco(s) do(s) produto(s) com preco superior a 100\n%.2f\n", m / (float)qm);
    }
    else
    {
        printf("Nao existe produto com preco superior a 100");
    }
    
    return 0;
}