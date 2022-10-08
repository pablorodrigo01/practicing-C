#include <stdio.h>

int main()
{

    int i, imaior = 0;
    float m[2], mm, exame, vm = 0;
    char n[2][100], nm;

    for (i = 0; i < 2; i++)
    {
        printf("Insira o nome do %d%caluno(a): ", i + 1, 248);
        scanf("%s", &n[i]);
        printf("Insira a media final: ");
        scanf("%f", &m[i]);
        if (m[i] > vm)
        {
            vm = m[i];
            imaior = i;
        }
    }
    for (i = 0; i < 2; i++)
    {
        if (m[i] < 7)
        {
            exame = 10 - m[i];
            printf("O aluno %s precisa tirar %.2f no exame.\n", n[i], exame);
        }
    }
    printf("O aluno(a) com maior medio %c o(a) %s, tendo media final de %.2f", 130, n[imaior], vm);

    return 0;
}
