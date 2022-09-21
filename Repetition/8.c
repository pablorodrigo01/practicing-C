#include <stdio.h>

int main()
{

    int yb, i;
    float y1, y2, y3, y4, y5, p1, p5, ytw1, ytw5;
    y1 = y2 = y3 = y4 = y5 = 0;

    for (i = 1; i <= 15; i++)
    {
        printf("Insira a Idade do individuo %d: ", i);
        scanf("%d", &yb);
        if (yb <= 0)
        {
            printf("Idade Invalida!");
            return 0;
        }
        else if (yb <= 15)
        {
            y1++;
        }
        else if (yb >= 16 && yb <= 30)
        {
            y2++;
        }
        else if (yb >= 31 && yb <= 45)
        {
            y3++;
        }
        else if (yb >= 46 && yb <= 60)
        {
            y4++;
        }
        else if (yb >= 61)
        {
            y5++;
        }
    }
    printf("Quantia em cada Faixa Etaria:\nFaixa Etaria 1: %.f\nFaixa Etaria 2: %.f\nFaixa Etaria 3: %.f\nFaixa Etaria 4: %.f\nFaixa Etaria 5: %.f\n", y1, y2, y3, y4, y5);

    ytw1 = y2 + y3 + y4 + y5; // 100% - sem Faixa Etaria 1
    ytw5 = y1 + y2 + y3 + y4; // 100% - sem Faixa Etaria 5

    if (y1 >= 1)
    {
        p1 = (y1 / ytw5) * 100;
        printf("A porcentagem na Faixa Etaria 1 eh %.2f%%\n", p1);
    }
    else if (y1 <= 0)
    {
        printf("A porcentagem na Faixa Etaria 1 eh 0%%\n");
    }

    if (y5 >= 1)
    {
        p5 = (y5 / ytw5) * 100;
        printf("A porcentagem na Faixa Etaria 5 eh %.2f%%\n", p5);
    }
    else if (y5 <= 0)
    {
        printf("A porcentagem na Faixa Etaria 5 eh 0%%\n");
    }

    return 0;
}