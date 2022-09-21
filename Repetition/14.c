#include <stdio.h>

int main()
{

    int i, y, checky, checkyw = 0, prhwbe = 0, sbe, qyh = 0, ayh = 0, e, hair;
    float w, h, pwbe = 0, ayw, pbeall, pbe = 0;
    // checky - verifica a idade superior a 50, checkyw - verifica a altura junto com a idade ja verificada, prhwbe - pessoa ruiva sem olho azul;
    // sbe - sinal para pessoa de olho azul, qyh -  quantidade de pessoas que tem tal altura inferior, ayh - soma da idade das pessoas de tal altura inferior;
    // e - olho, hair - cabelo, w - peso, h - altura, ayw - media da idade das pessoas de tal altura, pbeall - porcentagem para pessoa de olho azul;
    // pbe = pessoa de olho azul;

    for (i = 1; i <= 2; i++)
    {
        printf("Insira a Idade da pessoa de numero %d\n", i);
        scanf("%d", &y);
        if (y <= 0)
        {
            printf("Idade Invalida.\n");
            return 0;
        }
        else if (y > 50)
        {
            checky = 1;
        }
        else
        {
            checky = 0;
        }
        printf("Insira o peso (em quilos) da pessoa de numero %d\n", i);
        scanf("%f", &w);
        if (w <= 0)
        {
            printf("Peso Invalido\n");
            return 0;
        }
        else if (w < 60 && checky == 1)
        {
            checkyw++;
        }
        printf("Insira a altura (em metros) da pessoa de numero %d\n", i);
        scanf("%f", &h);
        if (h <= 0)
        {
            printf("Altura Invalida\n");
            return 0;
        }
        else if (h >= 100)
        {
            h = h / 100;
        }
        else if (h < 1.5)
        {
            ayh += y;
            qyh++;
        }
        //Programa foi feito utilizando Numeros(int) em vez de Letras(char) devido ao erro ao seu desenvolvimento.
        printf("Insira a cor dos olhos da pessoa de numero %d\n1 - Azul, 2 - Preto, 3 - Verde e 4 - Castanho.\n", i);
        scanf("%d", &e);
        switch (e)
        {
        case 1:
            pbe++;
            sbe = 1;
            break;

        default:
            sbe = 0;
            break;
        }

        printf("Insira a cor dos cabelos da pessoa de numero %d\n1 - Preto, 2 - Castanho, 3 - Louro e 4 - Ruivo.\n", i);
        scanf("%d", &hair);
        if (hair == 4 && sbe == 0)
        {
            prhwbe++;
        }
        pwbe = 2 - pbe;
        if (pwbe == 0)
        {
            pbeall = 100;
        }
        else
        {
            pbeall = (pbe / pwbe) * 100;
        }
        ayw = ayh / qyh;
    }

    printf("A quantidade de pessoas com idade superior a 50 e peso inferior a 60 quilos: %d\n", checkyw);
    printf("A media da idade de pessoas com altura inferior a 1.50: %.2f\n", ayw);
    printf("A percentagem de pessoas com olhos azuis entre todas as pessoas analisadas: %.2f%%\n", pbeall);
    printf("A quantidade de pessoas ruivas e que nao possuem olhos azuis: %d\n", prhwbe);

    return 0;
}