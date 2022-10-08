#include <stdio.h>

int main()
{

    int i = 0, n[15], p[i];

    for (i = 0; i < 15; i++)
    {
        printf("Insira o valor do %d%c numero: \n", i + 1, 248);
        scanf("%d", &n[i]);
    }
    printf("Lista Vetor: \n");
    for (i = 0; i < 15; i++)
    {
        printf("Posicao %d, Numero Inserido: %d\n", i, n[i]);
    }
    printf("Posicoes que tem numeros iguais a 30: \n");
    for (i = 0; i < 15; i++)
    {
        if (n[i] == 30)
        {
            p[i] = i;
            printf("Posicao %d %c igual a 30\n", p[i], 130);
        }
    }

    return 0;
    
}