#include <stdio.h>

#define TAM 5

int main()
{

    int i, j = TAM, a[TAM], b[TAM], s = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do Vetor A: ", i + 1, 248);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do Vetor B: ", i + 1, 248);
        scanf("%d", &b[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        j--;
        s = s + (a[i] - b[j]);
    }
    printf("Vetor A:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nVetor B:\n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\nSoma: %d", s);

    return 0;
}