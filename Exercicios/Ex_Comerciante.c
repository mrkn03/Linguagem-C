#include <stdio.h>

int main()
{
    int N, i, abaixo, entre, acima;
    double total_compra, total_venda, total_lucro;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char vet_produto[N][50];
    double vet_compra[N], vet_venda[N], perc_lucro[N];

    for(i=0; i<N; i++)
    {
        printf("Produto %d \n", i+1);

        printf("Nome: ");
        scanf("%s", &vet_produto[N][0]);

        printf("Preco de compra: R$");
        scanf("%lf", &vet_compra[i]);

        printf("Preco de venda: R$");
        scanf("%lf", &vet_venda[N]);
    }

    for (i=0; i<N; i++)
    {
        perc_lucro[i] = (vet_venda[i] - vet_compra[i]) / vet_compra[i] * 100;
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for (i=0; i<N; i++)
    {
        if (perc_lucro[i] < 10.0)
        {
            abaixo++;
        }
        else if (perc_lucro[i] < 20.0)
        {
            entre++;
        }
        else
        {
            acima++;
        }
    }

    total_compra = 0;
    total_venda = 0;

    for (i=0; i<N;i++)
    {
        total_compra = total_compra + vet_compra[i];
        total_venda = total_venda + vet_venda[i];
    }

    total_lucro = total_venda - total_compra;

    printf("\nRELATORIO\n");
    printf("Lucro abaixo de 10%: %d \n", abaixo);
    printf("Lucro entre 10% e 20%: %d \n", entre);
    printf("Lucro acima de 20%: %d \n", acima);
    printf("Valor total de compra:  R$%.2lf \n", total_compra);
    printf("Valor total de venda: R$%.2lf \n", total_venda);
    printf("Lucro total: R$%.2lf \n", total_lucro);

    return 0;
}
