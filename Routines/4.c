#include <stdio.h>

float vol(float r, float v)
{
    v = ((float)4 / 3) * (r * r * r);
    return v;
}

int main()
{

    float r, v;

    printf("Insira o valor do raio: ");
    scanf("%f", &r);
    printf("Valor do raio inserido: %.2f\n", r);
    v = vol(r, v);
    printf("Volume da esfera: %.2f", v);

    return 0;
}