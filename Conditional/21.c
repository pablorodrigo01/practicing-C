#include <stdio.h>

int main()
{

	int c, cmax = 30;

	printf("Indique o codigo de origem: ");
	scanf("%d", &c);

	if (c > 30)
	{
		printf("Opcao invalida");
		return 0;
	}
	if (c == 1)
	{
		printf("O codigo de origem tem como procedencia do Sul");
	}
	else if (c == 2)
	{
		printf("O codigo de origem tem como procedencia do Norte");
	}
	else if (c == 3)
	{
		printf("O codigo de origem e da procedencia do Leste");
	}
	else if (c == 4)
	{
		printf("O codigo de origem e da procedencia do Oeste");
	}
	else if (c > 4 && c < 7)
	{
		printf("O codigo de origem e da procedencia do Nordeste");
	}
	else if (c >= 7 && c <= 9)
	{
		printf("O codigo de origem e da procedencia do Sudeste");
	}
	else if (c >= 10 && c <= 20)
	{
		printf("O codigo de origem e da procedencia do Centro-Oeste");
	}
	else if (c >= 21 && c <= 30)
	{
		printf("O codigo de origem e da procedencia do Nordeste");
	}

	return 0;
}