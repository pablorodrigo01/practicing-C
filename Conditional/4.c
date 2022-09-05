#include <stdio.h>

int main()
{

    float n1, n2, n3;

    printf("Insira o primeiro numero: ");
    scanf("%f", &n1);
    printf("Insira o segundo numero: ");
    scanf("%f", &n2);
    printf("Insira o segundo numero: ");
    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("%.2f\nO primeiro numero eh maior.", n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("%.2f\nO segundo numero eh maior.", n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("%.2f\nO terceiro numero eh maior.", n3);
    }

    return 0;
}