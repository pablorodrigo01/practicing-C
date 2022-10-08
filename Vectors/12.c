#include <stdio.h>

int main()
{

    int i, n[5], s = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d%c numero:\n", i + 1, 248);
        scanf("%d", &n[i]);
        s = s + n[i];
    }
    printf("Os numeros digitados foram:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d + ", n[i]);
    }
    printf("= %d", s);

    return 0;
}