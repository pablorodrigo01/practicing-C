#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, m;
    printf("Primeira Nota: ");
    scanf("%f", &n1);
    printf("Segunda Nota: ");
    scanf("%f", &n2);
    printf("Terceira Nota: ");
    scanf("%f", &n3);
    printf("Quarta Nota: ");
    scanf("%f", &n4);
    m = (n1 + n2 + n3 + n4) / 4;
    printf("A nota eh: %.1f\n", m);
    if (m >= 7)
    {
        printf("Aprovado");
    }
    else
        printf("Nao aprovado");

    return 0;
}