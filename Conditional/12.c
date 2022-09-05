#include <stdio.h>

int main()
{

	float sf;

	printf("Indique o salario do funcionario: ");
	scanf("%f", &sf);
	printf("O salario do funcionario eh de %.2f\n", sf);
	sf = sf - (sf * 0.07);
	printf("O salario do funcionario descontando o imposto eh de %.2f\n", sf);

	if (sf <= 350)
	{
		sf = sf + 100;
	}
	else if (sf > 350 && sf <= 600)
	{
		sf = sf + 75;
	}
	else if (sf > 600 && sf <= 900)
	{
		sf = sf + 50;
	}
	else if (sf > 900)
	{
		sf = sf + 35;
	}
	printf("O salario com gratificacao eh de %.2f", sf);

	return 0;
}
