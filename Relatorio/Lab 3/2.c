#include <stdio.h>

int conta_bit(int num, int bit);

void main(void)
{

    int b = 1, quant;
    unsigned int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);
    quant = conta_bit(num, b);
    printf("A quantidade de bits %d no numero %d eh %d\n", b, num, quant);
}

int conta_bit(int num, int bit)
{

    int i, flag = 1, valor, conta1 = 0;

    for (i = 0; i < 8; i++)
    {
        valor = num & flag; // Utiliza o & para manipular os
        if (valor)
        {
            conta1++;
        }
        flag = flag << 1; // Movimenta um BIT de flag para direita
    }
    if (bit)
    {
        return (conta1);
    }
}