#include <stdio.h>

int main()
{

    int i = 0, log[15], prog[10], j = 0;

    for (i = 0; i < 15; i++)
    {
        printf("Insira o %d%c numero de matricula do aluno de Logica: \n", i + 1, 248);
        scanf("%d", &log[i]);
        if (log[i] <= 0)
        {
            printf("Numero Invalido");
            return 0;
        }
    }
    for (j = 0; j < 10; j++)
    {
        printf("Insira o %d%c numero de matricula do aluno de Linguagem de Programacao: \n", j + 1, 248);
        scanf("%d", &prog[j]);
        if (prog[j] <= 0)
        {
            printf("Numero Invalido");
            return 0;
        }
    }
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (log[i] == prog[j])
            {
                printf("O numero de matricula %d, estao em ambos os cursos.\n", log[i]);
            }
        }
    }

    return 0;
}