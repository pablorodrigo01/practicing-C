#include <stdio.h>

float calc(float alt, float pi, int s)
{
    if (s == 1)
    {
        pi = 62.1 * alt - 44.7;
    }
    else
    {
        pi = 72.7 * alt - 58;
    }
    return pi;
}

int main()
{

    float alt, pi = 0;
    int s;
    printf("Insira seu sexo: 1 - Feminino | 2 - Masculino\n");
    scanf("%d", &s);
    if (s <= 0 || s > 2)
    {
        printf("Numero invalido.\n");
        return 0;
    }
    printf("Insira sua altura: ");
    scanf("%f", &alt);
    if (s == 1)
    {
        printf("Sexo: Feminino\n");
    }
    else
    {
        printf("Sexo: Masculino\n");
    }
    printf("Sua altura: %.2f\n", alt);
    pi = calc(alt, pi, s);
    printf("Seu peso ideal: %.2f\n", pi);

    return 0;
}