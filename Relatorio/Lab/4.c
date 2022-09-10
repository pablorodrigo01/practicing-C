// 4) - Escrever função void print_string (char *string), que imprime uma string dada.

#include <stdio.h>

void print_string(char *string)
{
    while (*string)
    {
        putchar(*string++);
    }
}

int main()
{

    char s[10];
    scanf("%s", &s);
    print_string(s);

    return 0;
}