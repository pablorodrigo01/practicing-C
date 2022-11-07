#include <stdio.h>

#define N 4 // Define N como 4
#define K 4 // Defini K como 4
#define M 4 // Define M como 4

void produto_matrizes(double a[N][K], double b[K][M], double c[N][M], int n, int m, int k) // Função responsavel pelo produto das matrizes e escrita na tela do usuario.
{

    // Produto das Matrizes
    // É necessario dois "for" quando trabalhamos com matrizes, para ser possivel acessar os "dois vetores"
    for (n = 0; n < N; n++) // Primeiro vetor de c [N]
    {
        for (m = 0; m < M; m++) // Segundo vetor de c [M]
        {
            c[n][m] = 0;
            for (k = 0; k < K; k++)
            {
                c[n][m] += a[n][k] * b[k][m]; // A posição da matriz de C sera o produto da matriz de a e b.
            }                                 // Lembrando que o primeiro vetor so ira pra segunda posição "c N[1]"
            // somente apos de terminar todas as posições de c M[0] - c M[1] - c M[2] - c M[3].
        }
    }
    printf("Matriz A: \n");
    // Print Matriz A
    for (n = 0; n < N; n++) // Dois Loops necessarios para passar por todas as posições da matriz.
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
    for (k = 0; k < K; k++) // Dois Loops necessarios para passar por todas as posições da matriz.
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
    for (n = 0; n < N; n++) // Dois Loops necessarios para passar por todas as posições da matriz.
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
    for (n = 0; n < N; n++) // Dois Loops contendo a inserção de dados para a matriz A.
    {
        for (k = 0; k < K; k++)
        {
            printf("Informe o valor da %d%c Linha e da %d%c Coluna da Matriz A: ", n + 1, 248, k + 1, 248);
            scanf("%lf", &a[n][k]);
        }
    }
    // matriz B
    for (k = 0; k < K; k++) // Dois Loops contendo a inserção de dados para a matriz B.
    {
        for (m = 0; m < M; m++)
        {
            printf("Informe o valor da %d%c Linha e da %d%c Coluna da Matriz B: ", k + 1, 248, m + 1, 248);
            scanf("%lf", &b[k][m]);
        }
    }
    produto_matrizes(a, b, c, n, m, k); // Chama a função que contem o produto e a escrita das matrizes.

    return 0;
}