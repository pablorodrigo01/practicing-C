#include <stdio.h>

int main()
{

    float n1, n2, m;

    printf("Primeira Nota: ");
    scanf("%f", &n1);
    printf("Segunda Nota: ");
    scanf("%f", &n2);
    m = (n1 + n2) / 2;
    printf("Nota %.1f\n", m);
    if (m >= 7)
    {
        printf("Aprovado");
    }
    else if (m >= 4)
    {
        printf("Exame");
    }
    else if (m < 4)
    {
        printf("Reprovado");
    }

    return 0;
}