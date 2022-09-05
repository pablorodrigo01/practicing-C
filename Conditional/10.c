#include <stdio.h>

int main(){

	float cf, cc;

	printf("Indique o custo de fabricacao: ");
	scanf("%f", &cf);
	printf("Custo de fabricacao eh de %.2f\n", cf);

	if(cf <= 12000){
		cc = cf + (cf * 0.05);
	}
	else if (cf > 12000 && cf <= 25000){
		cc = cf + (cf * 0.10) + (cf * 0.15);
	}
	else if (cf > 25000){
		cc = cf + (cf * 0.15) + (cf * 0.20);
	}
	printf("O custo ao consumidor eh um valor de %.2f", cc);


	return 0;

}