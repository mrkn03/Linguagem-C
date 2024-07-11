#include <stdio.h>
#include <string.h>

int main()
{
    double largura, comprimento, valor_metro, area, preco_terreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: R$");
    scanf("%lf", &valor_metro);

    area = largura * comprimento;
    preco_terreno = area * valor_metro;

    printf("Area do terreno: %.2lf\n", area);
    printf("Preco do terreno: R$%.2lf\n", preco_terreno);

    return 0;
}
