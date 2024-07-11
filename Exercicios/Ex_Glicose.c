#include <stdio.h>

int main()
{
    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100)
    {
        printf("Classificacao: -> NORMAL");
    }
    else if (glicose <= 140)
    {
        printf("Classificacao: -> ELEVADO");
    }
    else
    {
        printf("Classificacao: -> DIABETES");
    }

    return 0;
}
