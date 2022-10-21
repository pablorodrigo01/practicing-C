#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp;
    char filename[80];
    int c, i, letter[26] = {0}; /* inicializa letter [] com 0 */

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r"); /* abrir arquivo para leitura em formato texto */
    if (fp == NULL)
    {
        printf("Erro de abertura de arquivo...");
        exit(0);
    }
    /* ler caracter do arquivo e incrementar contadores */
    while ((c = getc(fp)) != EOF)
    {
        //desenvolver contador
    }
    fclose(fp); /* fechar arquivo */
    return 0;
}
