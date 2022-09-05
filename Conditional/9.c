#include <stdio.h>

int main()
{

	float ms;

	printf("Indique o saldo medio: ");
	scanf("%f", &ms);
	printf("O saldo medio eh de: %.2f\n", ms);

	if (ms > 400)
	{
		ms = ms * 0.30;
	}
	else if (ms <= 200)
	{
		ms = ms * 0.10;
	}
	else if (ms <= 300)
	{
		ms = ms * 0.20;
	}
	else if (ms <= 400)
	{
		ms = ms * 0.25;
	}
	printf("O valor de credito eh de %.2f", ms);

	return 0;
}