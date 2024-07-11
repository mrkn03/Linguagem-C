#include <stdio.h>

int main()
{
    double x, y;

    printf("Valor de X: ");
    scanf("%lf", &x);

    printf("Valor de Y: ");
    scanf("%lf", &y);

    if (x > 0 && y >0)
    {
        printf("Q1");
    }
    if (x > 0 && y < 0)
    {
        printf("Q4");
    }
    if (x < 0 && y < 0)
    {
        printf("Q3");
    }
    if (x < 0 && y > 0)
    {
        printf("Q2");
    }
    if (x == 0 && y == 0)
    {
        printf("Origem");
    }
    if (x > 0 && y ==0)
    {
        printf("Eixo X");
    }
    if (x == 0 && y >0)
    {
        printf("Eixo Y");
    }

    return 0;
}
