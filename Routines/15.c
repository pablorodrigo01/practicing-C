#include <stdio.h>

#define N 15

int par(int *x, int p)
{
    int j;
    for (j = 0; j < N; j++)
    {
        if (x[j] % 2 == 0)
        {
            p++;
        }
    }
    return p;
}

int main()
{

    int i, p = 0, x[N];

    for (i = 0; i < N; i++)
    {
        printf("Insira o %d%c valor do vetor x: ", i + 1, 248);
        scanf("%d", &x[i]);
    }
    p = par(x, p);
    printf("A quantia de pares no vetor: %d", p);

    return 0;
}