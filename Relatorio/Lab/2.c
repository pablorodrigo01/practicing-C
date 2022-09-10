// 2) - Escrever função para obter o tamanho de uma string, usando, internamente ,a forma de ponteiro. Protótipo: int mystrlen (char s[]);

#include <stdio.h>

int mystrlen(char s[])
{

    int n;

    for (n = 0; *s; s++)
    {
        n++;
    }

    return (n);
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