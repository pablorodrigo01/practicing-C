#include <stdio.h>
#include <math.h>
/* o.O */
/* +- +- +- +- */

#define TAM 10

// Convenção verifica = 1 --> O numero é primo e verifica = 0 --> O numero não é primo
main()
{
    int n[TAM], d, i, limite, verifica; // bandeira indicativa de verificação de numero primo.
    for (i = 0; i < TAM; i++)
    {
        printf("Insira o %d%c valor do vetor: ", i + 1, 248);
        scanf("%d", &n[i]);
    }
    verifica = 1;
    for (i = 0; i < TAM; i++)
    {
        if (n[i] > 1)
        { // só verifica se o número for maior que 1
            d = 2;
            verifica = 1;
            limite = sqrt(n[i]);            // determina o limite de busca de dividendos até a raiz quadrada do número analisado
            while (verifica && d <= limite) // laço de verificação
            {
                // se o número for divisível por d, este não é primo
                if (n[i] % d == 0)
                {
                    // define como não primo
                    verifica = 0;
                }
                // incrementa o número para testar
                d++;
            }
            // imprime se primo
            if (verifica) // é o mesmo que verifica == 1
            {
                printf("%d ", n[i]);
            }
        }
    }
    return 0;
}