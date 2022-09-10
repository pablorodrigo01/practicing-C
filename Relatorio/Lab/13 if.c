#include <stdio.h>

void conv(float n){

    if(n < 6){
        printf("Conceito F");
    }
    else if(n < 7){
        printf("Conceito D");
    }
    else if(n < 8){
        printf("Conceito C");;
    }
    else if(n < 9){
        printf("Conceito B");
    }
    else if(n <= 10){
        printf("Conceito A");
    }

}

int main(){

    float n;

    printf("Insira a nota: ");
    scanf("%f", &n);

    conv(n);

    return 0;

}