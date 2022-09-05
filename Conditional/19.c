#include <stdio.h>

int main()
{

    float h;
    int s;

    printf("Indique a altura: ");
    scanf("%f", &h);
    printf("Selecione o sexo\n1 - Homem\n2 - Mulher\n");
    scanf("%d", &s);

    if (s != 1 && s != 2)
    {
        printf("Opcao invalida");
        return 0;
    }
    if (s == 1)
    {
        printf("O peso ideal do homem eh de: %.2f", (72.7 * h) - 58);
    }
    else if (s == 2)
    {
        printf("O peso ideal da mulher eh de: %.2f", (62.1 * h) - 44.7);
    }

    return 0;
}