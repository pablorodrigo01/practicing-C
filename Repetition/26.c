#include <stdio.h>

int main()
{

    int i, ny, y;
    float ay;

    printf("Digite quantas idades serao inseridas: ");
    scanf("%d", &ny);
    if (ny <= 0)
    {
        printf("Numero Invalido.");
        return 0;
    }

    for (i = 1; i < ny; i++) // Motivo - Linha 17
    {
        if (y <= 0)
        {
            printf("Idade Invalida.");
            return 0;
        }
        printf("Insira a idade da pessoa de numero %d\n", i);
        scanf("%d", &y);
        ay += y;
    }
    ay += 0; // Ultima idade igual a Zero, por isso i < ny;
    ay = ay / ny;

    printf("A media das idades: %.f\n", ay);

    return 0;
}