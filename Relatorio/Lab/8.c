//8) - Escrever função int mystrcmp (char *s1, char *s2) que compara duas strings s1 e s2, usando ponteiros, e retorna: 0 se as strings forem iguais (lexicograficamente);  positivo se s1 > s2;  e negativo se s2 > s1. Exemplo: s1="abcde"  e   s2 = "bcde"  =>  retorna negativo

#include <stdio.h>

int mystrcmp (char *s1, char *s2){

    for(; *s1 == *s2; s1++, s2++){
        if(*s1 == '\0'){
            return (0);
        }
    }
    return(*s1 - *s2);

}

int main()
{

    int function;
    char s1[10];
    char s2[10];
    scanf("%s", &s1);
    scanf("%s", &s2);
    function = mystrcmp(s1, s2);
    printf("%d\n", function);

    return 0;
}