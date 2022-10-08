#include <stdio.h>

int main()
{

    int i, j, c, np[10] /*= {4, 7, 5, 8, 2, 15, 9, 6, 10, 11}*/, ns[5] /*= {3, 4, 5, 8, 2}*/, vst = 0, vp, vs;

    for (i = 0; i < 10; i++)
    {
        printf("Insira o %d%c valor do 1%c vetor: ", i + 1, 248, 248);
        scanf("%d", &np[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Insira o %d%c valor do 2%c vetor: ", i + 1, 248, 248);
        scanf("%d", &ns[i]);
    }

    // Primeiro Vetor Resultante
    for (i = 0; i < 5; i++) // Somando todos os numeros do segundo Vetor
    {
        vst = vst + ns[i];
    }
    for (i = 0; i < 5; i++) // Primeiro Par
    {
        if (ns[i] % 2 == 0)
        {
            vp = ns[i] + vst;
            printf("Primeiro Vetor Resultante: %d\n", vp);
        }
    }
    // Segundo Vetor Resultante
    for (i = 0; i < 10; i++)
    {
        if (np[i] % 2 != 0) // Primeiro Impar
        {
            c = 0;
            for (j = 0; j < 5; j++)
            {
                if (np[i] % ns[j] == 0)
                {
                    c++;
                }
                vs = c;
            }
            printf("Segundo Vetor resultante: %d\n", vs);
        }
    }

    return 0;
}