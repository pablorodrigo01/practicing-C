#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char filename[80];
    int c, i, letter[26] = {0}; /* inicializa letter [] com 0 */
    int letterc[26] = {0}; // contador para cada letra.

    printf("Enter filename: ");
    scanf("%s", filename); // le o nome do arquivo inserido pelo usuario.

    fp = fopen(filename, "r"); /* abrir arquivo para leitura em formato texto */
    if (fp == NULL)
    {
        printf("Erro de abertura de arquivo...");
        exit(0);
    }
    /* ler caracter do arquivo e incrementar contadores */
    while ((c = getc(fp)) != EOF)
    {
        // Atribuindo o alfabeto para cada posição do vetor letter[26]
        for (i = 0; i < 26; i++)
        {
            // letter iniciara com 'a' (97 em ASCII) + i.
            letter[i] = 'a' + i;
        }
        c = tolower(c); // Caso existe alguma letra em maiscula ira transformar em lower case (minuscula).
        for (i = 0; i < 26; i++)
        {
            if (c == letter[i]) // caso 'c' for igual a letra, somara no contador.
            {
                letterc[i]++;
            }
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (letterc[i] == 0) // caso nao tenha nenhuma ocorrencia da letra.
        {
            printf("Nao houve ocorrencia da letra %c.\n", letter[i]);
        }
        else
        {
            printf("A letra %c apareceu %d vezes no arquivo lido.\n", letter[i], letterc[i]);
        }
    }

    fclose(fp); /* fechar arquivo */
    return 0;
}
