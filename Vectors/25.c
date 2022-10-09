#include <stdio.h>

#define TAM 15

int main()
{
    int n[TAM], i, ma;
    float nc[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do vetor: ", i + 1, 248);
        scanf("%d", &n[i]);
        nc[i] = n[i];
    }
    ma = n[0];
    for (i = 1; i < TAM; i++)
    {
        if (n[i] > ma)
        {
            ma = n[i];
        }
    }
    printf("Vetor: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", n[i]);
    }
    printf("\nMaior valor: %i\n", ma);
    printf("Vetor apos divisao: ");
    for (i = 0; i <  TAM; i++)
    {
        printf("%.2f ", nc[i]/ma);
    }

    return 0;
}