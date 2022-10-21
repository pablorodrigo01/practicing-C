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

    char string[10];
    scanf("%s", &string);
    char *function;
    function = mystrlen(string);
    printf("%d\n", function);

    return 0;
}