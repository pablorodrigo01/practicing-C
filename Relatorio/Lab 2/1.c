#include <stdio.h>

#define N 4
#define K 4
#define M 4

void produto_matrizes(double a[N][K], double b[K][M], double c[N][M], int n, int m, int k)
{

    // Produto das Matrizes
    for (n = 0; n < N; n++)
    {
        for (m = 0; m < M; m++)
        {
            c[n][m] = 0;
            for (k = 0; k < K; k++)
            {
                c[n][m] += a[n][k] * b[k][m];
            }
        }
    }
    printf("Matriz A: \n");
    // Print Matriz A
    for (n = 0; n < N; n++)
    {
        for (k = 0; k < K; k++)
        {
            printf("%6.lf", a[n][k]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Matriz B: \n");
    // Print Matriz B
    for (k = 0; k < K; k++)
    {
        for (m = 0; m < M; m++)
        {
            printf("%6.lf", b[k][m]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Matriz C: \n");
    // Print Matriz C
    for (n = 0; n < N; n++)
    {
        for (m = 0; m < M; m++)
        {
            printf("%6.lf", c[n][m]);
        }
        printf("\n");
    }
}

int main()
{
    double a[N][K], b[K][M], c[N][M];
    int n, k, m;
    // matriz A
    for (n = 0; n < N; n++)
    {
        for (k = 0; k < K; k++)
        {
            printf("Informe o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", n + 1, 248, k + 1, 248);
            scanf("%lf", &a[n][k]);
        }
    }
    // matriz B
    for (k = 0; k < K; k++)
    {
        for (m = 0; m < M; m++)
        {
            printf("Informe o valor da %d%c Linha e da %d%c Coluna da Matriz B: ", k + 1, 248, m + 1, 248);
            scanf("%lf", &b[k][m]);
        }
    }
    produto_matrizes(a, b, c, n, m, k);

    return 0;
}