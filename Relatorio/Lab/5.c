// 5) - Escrever função void mystrcpy (char s[], char t[]), que copia uma string t para s, usando vetores.

#include <stdio.h>

void mystrepy(char s[], char t[])
{

    int i = 0;
    while ((s[i] = t[i]) != '\0')
    {
        i++;
    }
}

int main()
{

    char s[10]; 
    char t[10];
    scanf("%s", &t);
    mystrepy(s, t);
    printf("Vetor de char s[] eh: %s\n", s);

    return 0;
}