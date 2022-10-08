#include <stdio.h>

int main()
{

    int i;
    char check;
    float t, tv = 0, tp = 0, tt, tcp;

    for (i = 1; i <= 15; i++)
    {
        printf("Insira o codigo da compra de numero %d:\nA Vista - V\nA Prazo - P\n", i);
        check = getchar();
        if (check != 'v' && check != 'V' && check != 'p' && check != 'P')
        {
            printf("Codigo Invalido\n");
            return 0;
        }
        else if (check == 'V' || check == 'v')
        {
            printf("Insira o valor da transacao a vista de numero %d: ", i);
            scanf("%f", &t);
            if (t <= 0)
            {
                printf("Valor de transacao Invalido.");
                return 0;
            }
            tv += t;
        }
        else if (check == 'P' || check == 'p')
        {
            printf("Insira o valor da transacao a prazo de numero %d: ", i);
            scanf("%f", &t);
            if (t <= 0)
            {
                printf("Valor de transacao Invalido.");
                return 0;
            }
            tp += t;
        }
        getchar();
    }
    tt = tp + tv;
    tcp = tp / 3;
    printf("Valor das transacoes a vista: R$%.2f\n", tv);
    printf("Valor das transacoes a prazo: R$%.2f\n", tp);
    printf("Valor Total: R$%.2f\n", tt);
    printf("Valor da primeira prestacao da transacao a prazo: R$%.2f\n", tcp);

    return 0;
}
