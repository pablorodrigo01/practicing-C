// 1) - Escrever função para obter o tamanho de uma string, usando vetor. Protótipo: int mystrlen (char s[]);

#include <stdio.h>

int mystrlen(char s[])
{

    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        i++;
    }

    return (i);
}

int main()
{

    char s[10];
    scanf("%s", &s);
    int function;
    function = mystrlen(s);
    printf("%d\n", function);

    return 0;
}