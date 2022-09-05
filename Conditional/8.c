#include <stdio.h>

int main(){

	float s;

	printf("Indique o salario do funcionario: ");
	scanf("%f", &s);
	printf("O salario indicado eh de: %.2f\n", s);

	if (s > 300){
		s = s * 1.15;
	}
	else{
		s = s * 1.35; 
	}
	printf("O salario reajustado eh de: %.2f", s);

	return 0;

}