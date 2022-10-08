#include <stdio.h>

int main()

{

    int i, n[10], vp = 0, vs = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Insira o %d%c valor: ", i + 1, 248);
        scanf("%d", &n[i]);
        if (n[i] % 2 == 0)
        {
            vp = vp + n[i];
        }
        else
        {
            vs = vs + n[i];
        }
    }
    printf("1%c Vetor Resultante, contendo par(es): %d\n", 248, vp);
    printf("2%c Vetor Resultante, contendo impar(es): %d\n", 248, vs);

    return 0;
}