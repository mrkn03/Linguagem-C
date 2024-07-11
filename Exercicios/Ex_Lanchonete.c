#include <stdio.h>

int main()
{
    int codigo, quantidade;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigo == 1)
    {
        valor = (double) quantidade * 5;
    }
    if (codigo == 2)
    {
        valor = (double) quantidade * 3.5;
    }
    if (codigo == 3)
    {
        valor = (double) quantidade * 4.8;
    }
    if (codigo == 4)
    {
        valor = (double)quantidade * 8.9;
    }
    if (codigo == 5)
    {
        valor = (double) quantidade * 7.32;
    }

    printf("Valor a pagar: R$%.2lf", valor);

    return 0;
}
