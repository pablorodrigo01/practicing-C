// 9) - Escrever função void append (char s1[], char s2[]) que acrescenta o conteúdo da strings s2 em s1, usando vetores,. Exemplo: s1 ="abcd"  e   s2 = "efg"=>  s1 = "abcdefg"

#include <stdio.h>

void append(char s1[], char s2[])
{
    int i, j;
    i = j = 0;
    while (s1[i] != '\0')
    {
        i++;
    }
    while (s1[i++] = s2[j++])
    {
        ;
    }
}

int main()
{

    char s1[10];
    char s2[10];
    scanf("%s", s1);
    scanf("%s", s2);
    append(s1, s2);
    printf("%s\n", s1);

    return 0;
}