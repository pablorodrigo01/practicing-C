#include <stdio.h>

#define TAM 10

int main()
{

    int i, j, n1[TAM], n2[TAM], r;
    r = i = j = 0;

    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do 1%c vetor: ", i + 1, 248, 248);
        scanf("%d", &n1[i]);
    }
    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do 2%c vetor: ", i + 1, 248, 248);
        scanf("%d", &n2[i]);
        for (j = 0; j < TAM; j++)
        {
            if (n2[i] == n1[j])
            {
                r += n2[i] * n1[j];
            }
        }
    }
    printf("Vetor Resultante: %d", r);

    return 0;
}