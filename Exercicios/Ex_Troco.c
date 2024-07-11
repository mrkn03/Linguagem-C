#include <stdio.h>

int main()
{
    double preco, din_recebido, troco;
    int quantidade;

    printf("Preco unitario do produto: R$");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: R$");
    scanf("%lf", &din_recebido);

    troco = (din_recebido - (preco * quantidade));
    printf("TROCO = R$%2.lf", troco);

    return 0;
}
