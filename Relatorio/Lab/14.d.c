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
    float sum, p, fat = 1;
    double x;

    printf("Insira o valor de X: ");
    scanf("%lf", &x);
    printf("Insira a quantia de termos: ");
    scanf("%d", &n);

    sum = 1 + x; // A soma nessa condição é tudo positiva.
    for (i = 2; i <= n; i++)
    {
        fat = fat * i;
        p = pow(x, (float)i);
        sum = sum + (p / fat);
    }
    sum = sum + (-1 * ((float)p / (float)fat));
    printf("%f\n", 1.0 / sum);

    return 0;
}