#include <stdio.h>

int main()
{
    int x, n;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &x);

    for (int i=1; i<x+1; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n < 0 && n % 2 == 0)
        {
            printf("PAR NEGATIVO \n");
        }
        else if (n < 0 && n % 2 != 0)
        {
            printf("IMPAR NEGATIVO \n");
        }
        else if (n > 0 && n % 2 == 0)
        {
            printf("PAR POSITIVO \n");
        }
        else if (n> 0 && n % 2 != 0)
        {
            printf("IMPAR POSITIVO \n");
        }
        else
        {
            printf("NULO \n");
        }
    }

    return 0;
}
