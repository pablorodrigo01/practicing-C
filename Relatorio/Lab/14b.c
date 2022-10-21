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
    float x, sum, sp, sn, p, fat = 1;

    printf("Insira o valor de X: ");
    scanf("%f", &x);
    printf("Insira a quantia de termos: ");
    scanf("%d", &n);

    // 1 - x + (x2/2!) – (x3/3!) + .....(-1)N  * (xN/N!)
    sn = x - 1;
    sp = 0;
    for (i = 2; i <= n; i++)
    {
        if (c == 0)
        {
            fat = fat * i;
            p = pow((float)x, (float)i);
            sp = sp + (p / fat);
            c = 1;
        }
        else
        {
            fat = fat * i;
            p = pow(x, i);
            sn = sn + (p / fat);
            c = 0;
        }
    }
    sum = sp - sn;
    sum = sum + -1 * ((float)p / (float)fat);
    printf("%f\n", sum);

    return 0;
}