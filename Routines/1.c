#include <stdio.h>

int soma(int N)
{
    int i, s = 0;
    for (i = 2; i < N; i++)
    {
        s = s + i;
    }
    return s;
}

int main()
{

    int N, s = 0;

    printf("Insira o valor de N: ");
    scanf("%d", &N);
    printf("Valor de N: %d\n", N);
    s = soma(N);
    printf("Soma dos numeros entre 1 e %d: %d\n", N, s);

    return 0;
}