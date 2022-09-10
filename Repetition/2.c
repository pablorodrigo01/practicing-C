#include <stdio.h>

int main()
{

    float s, i;
    int n;

    printf("Insira um numero inteiro e positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Numero inserido invalido");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        s = s + 1 / i;
    }

    printf("O resultado eh: %.2f", s);

    return 0;
}