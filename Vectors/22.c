#include <stdio.h>

#define TAM 10

int main()
{
    int i, cont, v[TAM], vb[TAM];
    cont = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do Vetor: ", i + 1, 248);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        if (v[i] > 0)
        {
            vb[cont] = v[i];
            cont++;
        }
    }
    printf("Vetor A: \n");
    for (i = 0; i < TAM; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\nVetor B:\n");
    for (i = 0; i < cont; i++)
    {
        printf("%d ", vb[i]);
    }

    return 0;
}