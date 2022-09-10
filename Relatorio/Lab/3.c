// 3) - Escrever função int mystrlen (char *string) que obtem o tamanho de uma string usando ponteiro.

#include <stdio.h>

int mystrlen(char *string)
{

    int count;

    for (count = 0; *string++; count++)
    {
        ;
    }

    return (count);
}

int main()
{

    char s[10];
    scanf("%s", &s);
    char *function;
    function = mystrlen(s);
    printf("%d\n", function);

    return 0;
}