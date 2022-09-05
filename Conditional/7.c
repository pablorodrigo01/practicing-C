#include <stdio.h>

int main()
{

    float s;

    printf("Indique o salario do funcionario: ");
    scanf("%f", &s);

    printf("Salario indicado: %.2f\n", s);
    if (s < 500)
    {
        s = s * 1.30;
        printf("O novo salario eh de: %.2f", s);
    }
    else
    {
        printf("Funcionario nao tem direito ao aumento.");
    }

    return 0;
}