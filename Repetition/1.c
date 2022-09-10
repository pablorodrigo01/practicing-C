#include <stdio.h>

int main()
{

    int i;
    float c;

    for (i = 1000; i <= 2000; i++)
    {
        c = i % 11;
        if (c == 5)
        {
            printf("Os numeros que participam do ocorrido: %d\n", i);
        }
    }

    return 0;
}