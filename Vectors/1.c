#include <stdio.h>

int main()
{

    int i, n[6], par = 0, impar = 0;

    for (i = 0; i < 6; i++)
    {

        printf("Informe o %d%c numero do vetor: \n", i + 1, 248);
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            par++;
        }
        else
        {
            impar++;
        }
    }
    printf("Todos os numeros pares: \n");
    for (i = 0; i < 6; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", par);
    printf("Todos os numeros impares: \n");
    for (i = 0; i < 6; i++)
    {
        if (n[i] % 2 != 0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\nQuantidade de numeros impar: %d\n", impar);

    return 0;
    
}