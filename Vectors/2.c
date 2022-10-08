#include <stdio.h>

int main()
{

    int i, n[7];

    for (i = 0; i < 7; i++)
    {
        printf("Informe o %d%c numero do vetor: \n", i + 1, 248);
        scanf("%d", &n[i]);
    }
    printf("Todos os numeros multiplos de dois: \n");
    for (i = 0; i < 7; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\nTodos os numeros multiplos de tres: \n");
    for (i = 0; i < 7; i++)
    {
        if (n[i] % 3 == 0)
        {
            printf("%d ", n[i]);
        }
    }
    printf("\nTodos os numeros multiplos de dois e tres: \n");
    for (i = 0; i < 7; i++)
    {
        if (n[i] % 3 == 0 && n[i] % 2 == 0)
        {
            printf("%d ", n[i]);
        }
    }

    return 0;
    
}