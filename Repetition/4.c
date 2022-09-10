#include <stdio.h>

int main(){

    int i;
    float a, b, c, d, v;

    for(i = 1; i <= 5; i++){

        printf("Grupo %d\n", i);
        printf("Insira 4 valores:\n");
        scanf("%f%f%f%f", &a, &b, &c, &d);
        printf("Valores lidos: %.f, %.f, %.f e %.f.\n", a, b, c, d);
        if (a >= b && a >= c && a >= d){
            if (b >= c && b >= d){
                if (c >= d){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", a, b, c, d);
                }
                else if (d >= c){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", a, b, d, c);
                }
            }
            else if (c >= b && c >= d){
                if (b >= d){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", a, c, b, d);
                }
                else if(d >= b){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", a, c, d, b);
                }
            }
            else if (d >= b && d>= c){
                if (b >= c){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", a, d, b, c);
                }
                else if(c >= b){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", a, d, c, b);
                }
            }
        }
        else if (b >= a && b >= c && b >= d){
            if (a >= c && a >= d){
                if (c >= d){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", b, a, c, d);
                }
                else if (d >= c){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", b, a, d, c);
                }
            }
            else if (c >= a && c >= d){
                if (a >= d){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", b, c, a, d);
                }
                else if(d >= a){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", b, c, d, a);
                }
            }
            else if (d >= a && d>= c){
                if (a >= c){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", b, d, a, c);
                }
                else if(c >= a){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", b, d, c, a);
                }
            }
        }
        else if (c >= a && c >= b && c >= d){
            if (a >= b && a >= d){
                if (b >= d){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", c, a, b, d);
                }
                else if (d >= b){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", c, a, d, b);
                }
            }
            else if (b >= a && b >= d){
                if (a >= d){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", c, b, a, d);
                }
                else if(d >= a){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", c, b, d, a);
                }
            }
            else if (d >= a && d>= b){
                if (a >= b){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", c, d, a, b);
                }
                else if(b >= a){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", c, d, b, a);
                }
            }
        }
        else if (d >= a && d >= b && d >= c){
            if (a >= b && a >= c){
                if (b >= c){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", d, a, b, c);
                }
                else if (c >= b){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", d, a, c, b);
                }
            }
            else if (b >= a && b >= c){
                if (a >= c){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", d, b, a, c);
                }
                else if(c >= a){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", d, b, c, a);
                }
            }
            else if (c >= a && d >= b){
                if (a >= b){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", d, c, a, b);
                }
                else if(b >= a){
                    printf("Ordem Decrescente: %.f, %.f, %.f e %.f.\n", d, c, b, a);
                }
            }
        }
    }

}