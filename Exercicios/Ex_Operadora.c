#include <stdio.h>

int main()
{
    int minutos;
    double valor;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    valor = 50.00;

    if (minutos > 50)
    {
        valor = (50 + (minutos - 100)* 2);
        printf("Valor a pagar: R$%.2lf", valor);
    }
    else
    {
        printf("Valor a pagar: R$%.2lf", valor);
    }
    return 0;
}
