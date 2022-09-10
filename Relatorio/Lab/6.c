// 6) - Escrever função void mystrcpy (char *s, char *t), que copia uma string t para s, usando ponteiros.

#include <stdio.h>

void mystrepy(char *s, char *t)
{

    while (*s++ = *t++)
    {
        ;
    }
}

int main()
{

    char s[10]; 
    char t[10];
    scanf("%s", &t);
    mystrepy(s, t);
    printf("Ponteiro de s eh: %s\n", s);

    return 0;
}