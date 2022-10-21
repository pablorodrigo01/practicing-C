#include <stdio.h>

int pow(float x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * pow(x, n - 1);
    }
}

int main()
{

    int n, i;
    float x, sum, p, fat = 1;

    printf("Insira o valor de X: ");
    scanf("%f", &x);
    printf("Insira a quantia de termos: ");
    scanf("%d", &n);

    sum = 1 + x;
    for (i = 2; i <= n; i++)
    {
        fat = fat * i;
        p = pow((float)x, (float)i);
        sum = sum + (p / fat);
    }
    printf("%f\n", 1.0 / sum);

    return 0;
}