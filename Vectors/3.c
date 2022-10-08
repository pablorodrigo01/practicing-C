#include <stdio.h>

int main()
{

    int i, cod[2], estoque[2], codc, codp, q, check = 0, copycod, checkestoque, copyestoque;

    for (i = 0; i < 2; i++)
    {
        printf("Insira o codigo do produto do %d%c produto: \n", i + 1, 248);
        scanf("%d", &cod[i]);
        if (cod[i] <= 0 && cod[i])
        {
            printf("Codigo Invalido!\n");
            return 0;
        }
        printf("Insira a quantidade em estoque: \n");
        scanf("%d", &estoque[i]);
        if (estoque[i] <= 0)
        {
            printf("Numero para Estoque Invalido!\n");
            return 0;
        }
        printf("Produto Registrado!\n");
        printf("Codigo %d: %d, Estoque: %d.\n", i + 1, cod[i], estoque[i]);
    }
    printf("Insira o seu codigo: \n");
    scanf("%d", &codc);
    if (codc <= 0)
    {
        printf("Codigo do Cliente Invalido!\n");
        return 0;
    }
    printf("Produtos em Estoque:\n");
    for (i = 0; i < 2; i++)
    {
        printf("Produto %d: Codigo %d, Estoque: %d\n", i + 1, cod[i], estoque[i]);
    }
    printf("Insira o codigo do produto que deseja comprar: \n");
    scanf("%d", &codp);
    for (i = 0; i < 2; i++)
    {
        if (codp == cod[i])
        {
            printf("Codigo do Produto Verificado, continuando processo...\n");
            check = 1;
            copycod = i;
        }
    }
    if (check != 1)
    {
        printf("Codigo do Produto Invalido.");
        return 0;
    }
    printf("Insira a quantia desejada para compra: \n");
    scanf("%d", &q);
    if (q <= 0)
    {
        printf("Quantia Invalida!\n");
        return 0;
    }
    if (q <= estoque[copycod])
    {
        checkestoque = 1;
        copyestoque = estoque[copycod];
        printf("Obrigado e volte sempre\n");
        estoque[copycod] = copyestoque - q;
    }
    if (checkestoque != 1)
    {
        printf("Nao temos estoque suficiente desta mercadoria\n");
        return 0;
    }
    printf("Estoque Atualizado!:\n");
    for (i = 0; i < 2; i++)
    {
        printf("Produto %d: Codigo %d, Estoque: %d\n", i + 1, cod[i], estoque[i]);
    }

    return 0;
    
}