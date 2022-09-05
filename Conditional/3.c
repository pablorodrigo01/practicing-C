#include <stdio.h>

int main()
{

    float n1, n2;

    printf("Insira o primeiro numero: ");
    scanf("%f", &n1);
    printf("Insira o segundo numero: ");
    scanf("%f", &n2);

    if (n1 > n2)
    {
        printf("%.2f\nO segundo numero eh menor.", n2);
    }
    else if (n2 > n1)
    {
        printf("%.2f\nO primeiro numero eh menor.", n1);
    }

    return 0;
}