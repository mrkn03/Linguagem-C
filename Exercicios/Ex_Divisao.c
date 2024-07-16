#include <stdio.h>

int main()
{
    int N;
    double num, den, divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i=1; i<=N; i++)
    {
        printf("Entre com o numerador: ");
        scanf("%lf", &num);

        printf("Entre com o denominador: ");
        scanf("%lf", &den);

        if (den == 0)
        {
            printf("DIVISAO IMPOSSIVEL \n");
        }
        else if (den != 0)
        {
            divisao = num / den;

            printf("DIVISAO = %.2lf \n", divisao);
        }

    }

    return 0;
}
