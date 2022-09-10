#include <stdio.h>

void conv(int n)
{

    switch (n)
    {
    case 5:
        printf("Conceito F");
        break;

    case 6:
        printf("Conceito D");
        break;

    case 7:
        printf("Conceito C");
        break;

    case 8:
        printf("Conceito B");
        break;

    case 9:
        printf("Conceito A");
        break;

    case 10:
        printf("Conceito A");
        break;
    }
}

int main()
{

    float n;

    printf("Insira a nota: ");
    scanf("%f", &n);

    conv(n);

    return 0;
}