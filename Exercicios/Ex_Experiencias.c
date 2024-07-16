#include <stdio.h>

int main()
{
    int N, cont, cont_total, cont_coelho, cont_ratos, cont_sapos;
    double perc_coelho, perc_ratos, perc_sapos;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    cont_coelho = 0;
    cont_ratos = 0;
    cont_sapos = 0;

    for (int i=1; i<=N; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%d", &cont);

        printf("Tipo de cobaia: ");
        scanf("%c", &tipo);

        if (tipo == 'C')
        {
            cont_coelho += cont;
        }
        else if (tipo == 'R')
        {
            cont_ratos += cont;
        }
        else if (tipo == 'S')
        {
            cont_sapos += cont;
        }
    }

    cont_total = cont_coelho + cont_ratos + cont_sapos;

    perc_coelho = ((double)cont_coelho / cont_total) * 100;
    perc_ratos = ((double)cont_ratos / cont_total) * 100;
    perc_sapos = ((double)cont_sapos / cont_total) * 100;

    printf("RELATORIO FINAL:");
    printf("Total: %d cobaias \n", cont_total);
    printf("Total de coelhos: %d \n", cont_coelho);
    printf("Total de ratos: %d \n", cont_ratos);
    printf("Total de sapos: %d \n", cont_sapos);
    printf("Percentual de coelhos: %lf \n", perc_coelho);
    printf("Percentual de ratos: %lf \n", perc_ratos);
    printf("Percentual de sapos: %lf \n", perc_sapos);

    return 0;
}
