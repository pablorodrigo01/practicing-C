#include <stdio.h>

#define TAM 30

int main()
{

    int i, v[TAM], v2[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do vetor: ", i + 1, 248);
        scanf("%d", &v[i]);
    }
    printf("Vetor 1: \n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", v[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        if (v[i] == 0)
        {
            v2[i] = 1;
        }
        else
        {
            v2[i] = v[i];
        }
    }
    printf("\nVetor 2 - Caso Nulo: \n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", v2[i]);
    }

    return 0;
}