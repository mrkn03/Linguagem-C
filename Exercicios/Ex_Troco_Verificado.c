#include <stdio.h>

int main()
{
    int quantidade;
    double preco, preco_total, din_recebido, troco;

    printf("Preco unitario do produto: R$");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido : R$");
    scanf("%lf", &din_recebido);

    preco_total = (double) preco * quantidade;

    if (din_recebido < preco_total)
    {
        troco = (double)din_recebido - preco_total;
        printf("DINHEIRO INSUFICIENTE. FALTAM R$%.2lf", troco);
    }
    else
    {
        troco = (double)din_recebido - preco_total;
        printf("TROCO = R$%.2lf", troco);
    }

    return 0;
}
