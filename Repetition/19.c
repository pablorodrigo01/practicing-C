#include <stdio.h>

int main()
{

    int i, check, p, p6;
    float vc, j, vfp, jp;

    printf("Insira o valor do carro: ");
    scanf("%f", &vc);
    printf("Pagamento a vista - 1\nPagamento parcelado - 2\n");
    scanf("%d", &check);
    if (check > 2 && check <= 0)
    {
        printf("Opcao Invalida.");
        return 0;
    }
    else if (check == 1)
    {
        printf("Valor Final a Vista: R$%.2f\n", vc * 0.8);
    }
    else if (check == 2)
    {
        printf("Insira a quantia de parcela desejada: ");
        scanf("%d", &p);
        //Sem necessidade de Loop de repeticao
        p6 = p % 6;
        if (p > 60 || p < 6)
        {
            printf("Quantia de parcela Invalida.");
            return 0;
        }
        else if (p6 != 0)
        {
            printf("Quantia de parcela Invalida.");
            return 0;
        }
        else if (p6 == 0)
        {
            j = p / 2;
            jp = 1 + (j / 100);
            vfp = vc * jp;
        }
        printf("Valor Final Parcelado: R$%.2f\n", vfp);
        printf("Quantia de parcelas feitas: %d\n", p);
        printf("Valor de cada parcela: R$%.2f\n", vfp / p);
    }

    return 0;
}