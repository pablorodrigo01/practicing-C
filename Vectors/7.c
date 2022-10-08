#include <stdio.h>

int main()
{

    int i, ng = 0;
    float n[10], np;

    for (i = 0; i < 10; i++)
    {
        printf("Insira o valor do %d%c numero: ", i + 1, 248);
        scanf("%f", &n[i]);
        if (n[i] < 0)
        {
            ng++;
        }
        else
        {
            np += n[i];
        }
    }
    printf("Soma dos numeros positivos: %.2f\n", np);
    printf("Quantia de numeros negativos: %d", ng);

    return 0;
    
}