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

    int n, i, c = 0;
    float x, sum, p, fat = 1;

    printf("Insira o valor de X: ");
    scanf("%f", &x);
    printf("Insira a quantia de termos: ");
    scanf("%d", &n);

    sum = 1 - x;
    for (i = 2; i <= n; i++)
    {
        if (c == 0)
        {
            fat = fat * i;
            p = pow((float)x, (float)i);
            sum = sum + (p / fat);
            c = 1;
        }
        else
        {
            fat = fat * i;
            p = pow(x, i);
            sum = sum - (p / fat);
            c = 0;
        }
    }
    sum = sum + -1 * ((float)p / (float)fat);
    printf("%f\n", sum);

    return 0;
}