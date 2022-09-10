#include <stdio.h>

int verification(int x)
{

    int i, div = 0;

    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            div++;
        }
    }

    if (div == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int i;

    for (i = 92; i <= 1478; i++)
    {

        if (verification(i) == 1)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}