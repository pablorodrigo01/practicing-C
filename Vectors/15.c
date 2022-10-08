#include <stdio.h>

int main()
{

    int i, f[2], fg[2];
    char n[2][50];

    for (i = 0; i < 2; i++)
    {
        printf("Insira %d%c nome do cliente: ", i + 1, 248);
        scanf("%s", &n[i]);
        printf("Insira a quantidade de locacoes feitas: ");
        scanf("%d", &f[i]);
        fg[i] = (float)f[i] / 10;
    }
    for (i = 0; i < 2; i++)
    {
        printf("Nome: %s\tNumero de locacoes: %d\tLocacoes Gratis: %d\t\n", n[i], f[i], fg[i]);
    }

    return 0;
}