#include <stdio.h>

int pow(float x, int n) // Função criada para contornar a proibição da função pow da biblioteca math.h.
{
    if (n == 0)
    {
        return 1; // Se algum numero elevado a 0, sera 1.
    }
    else
    {
        return x * pow(x, n - 1); // Retorna a potenciação.
    }
}

int main()
{

    int n, i, c = 0;
    float x, sum, p, fat = 1;

    printf("Insira o valor de X: ");        // Escreve na tela do usario.
    scanf("%f", &x);                        // Insere o valor em x.
    printf("Insira a quantia de termos: "); // Escreve na tela do usario.
    scanf("%d", &n);                        // Insere o valor em n.

    sum = 1 - x;             // Começo da função passada - " |||1 - x||| + (x2/2!) – (x3/3!) + ....."
    for (i = 2; i <= n; i++) // I iniciando com 2 devido a condição acima - proximo valor sendo (x2/2!).
    {
        if (c == 0) // Condição feita, sendo a separação para a alternancia de sinais
        {
            fat = fat * i;
            p = pow((float)x, (float)i);
            sum = sum + (p / fat);
            c = 1;
        }
        else
        {
            fat = fat * i;
            p = pow(x, i);
            sum = sum - (p / fat);
            c = 0;
        }
    }
    sum = sum + (-1 * n) * ((float)p / (float)fat); // Calculo Final. "(-1)N  * (xN/N!)."
    printf("%f\n", sum);

    return 0;
}