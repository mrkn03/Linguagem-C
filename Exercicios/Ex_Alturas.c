#include <stdio.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, i, n_menores;
    double soma_altura, media_altura, perc_menor;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char vet_nome[N][50];
    int vet_idade[N];
    double vet_altura[N];

    for (i=0; i<N; i++)
    {
        printf("Dados da %d pessoa: \n", i+1);

        printf("Nome: ");
        limpar_entrada();
        ler_texto(vet_nome[i], 50);

        printf("Idade: ");
        scanf("%d", &vet_idade[i]);

        printf("Altura: ");
        scanf("%lf", &vet_altura[i]);
    }

    n_menores = 0;
    soma_altura = 0;

    for (i=0; i<N; i++)
    {
        if (vet_idade[i] < 16)
        {
            n_menores++;
        }
        soma_altura += vet_altura[i];
    }

    printf("\n");

    media_altura = soma_altura / N;
    perc_menor = ((double)n_menores / N) * 100;

    printf("Altura media: %.2lf \n", media_altura);
    printf("Percentual de pessoas com menos de 16 anos: %.1lf%% \n", perc_menor);

    for (i=0; i<N; i++)
    {
        if (vet_idade[i] < 16)
        {
            printf("%s \n", vet_nome[i]);
        }
    }

    return 0;
}
