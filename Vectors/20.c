#include <stdio.h>

#define TAM 50

int main()
{

    int i, v[TAM];

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do vetor: ", i + 1, 248);
        scanf("%d", &v[i]);
    }
    printf("Numeros positivos: \n");
    for (i = 0; i < TAM; i++)
    {
        if (v[i] > 0)
        {
            printf("%d ", v[i]);
        }
    }

    return 0;
}