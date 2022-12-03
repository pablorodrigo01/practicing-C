#include <stdio.h>

int fat(int n, int f)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{

    int n, f = 1;

    printf("Insira o valor de n: ");
    scanf("%d", &n);
    printf("Numero inserido: %d\n", n);
    f = fat(n, f);
    printf("Fatorial: %d", f);
    return 0;
}