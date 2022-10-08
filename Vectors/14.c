#include <stdio.h>
#include <string.h>

int main()
{

    int i, qr, qa, qe;
    float n1[6], n2[6], m[6], mc;
    char a[6][100], s[6][100];
    mc = qr = qa = qe = 0;

    for (i = 0; i < 6; i++)
    {
        printf("Insira o %d%c nome da(a) Aluno(a): ", i + 1, 248);
        scanf("%s", &a[i]);
        printf("Insira a 1%c do(a) %s: ", 248, a[i]);
        scanf("%f", &n1[i]);
        printf("Insira a 2%c do(a) %s: ", 248, a[i]);
        scanf("%f", &n2[i]);
        m[i] = (n1[i] + n2[i]) / 2;
        if (m[i] >= 7.0)
        {
            strcpy(s[i], "Aprovado");
            qa++;
        }
        else if (m[i] < 5.0)
        {
            strcpy(s[i], "Reprovado");
            qr++;
        }
        else if (m[i] < 7.0)
        {
            strcpy(s[i], "Exame");
            qe++;
        }
        mc = mc + m[i];
    }
    printf("Aluno\t1%c\t2%c\tMedia\tSituacao\n", 248, 248);
    for (i = 0; i < 6; i++)
    {
        printf("%s\t%.2f\t%.2f\t%.2f\t%s\n", a[i], n1[i], n2[i], m[i], s[i]);
    }
    printf("\nMedia da classe = %.2f\n", mc / 6);
    printf("Quantidade de Aprovados = %d\n", qa);
    printf("Quantidade de Exame = %d\n", qe);
    printf("Quantidade de Reprovados = %d\n", qr);

    return 0;
}