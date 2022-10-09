#include <stdio.h>

#define TAM 15

int main()
{
    int n[TAM], i, ma, pma, me, pme;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do vetor: ", i + 1, 248);
        scanf("%i", &n[i]);
    }
    ma = n[0];
    pma = 0;
    for (i = 1; i < TAM; i++)
    {
        if (n[i] > ma)
        {
            ma = n[i];
            pma = i;
        }
    }
    me = n[0];
    pme = 0;
    for (i = 1; i < TAM; i++)
    {
        if (n[i] < me)
        {
            me = n[i];
            pme = i;
        }
    }
    printf("Vetor: ");
    for (i = 0; i < TAM; i++)
    {
        printf("%i ", n[i]);
    }
    printf("\nMaior valor: %i\tposicao: %i\n", ma, pma + 1);
    printf("Menor valor: %i\tposicao: %i\n", me, pme + 1);

    return 0;
}