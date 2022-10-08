#include <stdio.h>

int main()
{

    int i;
    char a[8][100];
    float n[8], m;

    for (i = 0; i < 8; i++)
    {
        printf("Insira o nome do(a) %d%c Aluno(a):\n", i + 1, 248);
        scanf("%s", &a[i]);
        printf("Insira a nota do(a) %s:\n", a[i]);
        scanf("%f", &n[i]);
        m = m + n[i];
    }
    printf("Relatorios de notas\n");
    printf("Aluno\tNota\n");
    for (i = 0; i < 8; i++)
    {
        printf("%s\t%.2f\n", a[i], n[i]);
    }
    printf("Media da Classe = %.2f\n", m / 8);

    return 0;
}