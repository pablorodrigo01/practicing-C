#include <stdio.h>

float medias(int p, float *s, float ms, float st)
{
    ms = st/p;
    return ms;
}
float mediaf(int p, float *s, float mf, float ft)
{
    mf = ft/p;
    return mf;
}
float maiors(int p, float *s, float maior)
{
    int i;
    for(i = 0; i< p; i++)
    {
        if(s[i] > maior)
        {
            maior = s[i];
        }
    }
    return maior;
}
float perc(int p, float *s, float ps, float psq)
{
    int i;
    for(i = 0; i < p; i++)
    {
        if(s[i] <= 350)
        {
            psq++;
        }
    }
    ps = psq/p;
    return ps;
}

int main()
{

    int p;
    printf("Insira o numero de pessoas: ");
    scanf("%d", &p);

    int f[p], mf, i, ft = 0;
    float s[p], ms, maior = 0, ps = 0, psq = 0, st = 0;

    for (i = 0; i < p; i++)
    {
        printf("Insira o %d%c salario: ", i + 1, 248);
        scanf("%f", &s[i]);
        st += s[i];
        printf("Insira o numero de filhos: ");
        scanf("%d", &f[i]);
        ft += f[i];
    }
    ms = mediaf(p, s, ms, st);
    mf = mediaf(p, s, mf, ft);
    maior = maiors(p, s, maior);
    ps = perc(p, s, ps, psq);

    printf("Media salarial: %.2f\n", ms);
    printf("Media de filhos: %d\n", mf);
    printf("Maior salario: %.2f\n", maior);
    printf("Percentual de pessoas com salario de ate 350 reais: %.2f%%", ps*100);

    return 0;
}