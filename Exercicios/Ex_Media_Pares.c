#include <stdio.h>

int main()
{
    int i, N, cont_par;
    double soma_par, media_par;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for (i=0; i<N; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    soma_par = 0;
    cont_par = 0;

    for (i=0; i<N; i++)
    {
        if (vet[i] % 2 == 0)
        {
            soma_par = soma_par + vet[i];
            cont_par++;
        }
    }

    media_par = soma_par / cont_par;

    if (media_par != 0)
    {
        printf("\nMEDIA DOS PARES = %.2lf", media_par);
    }
    else
    {
        printf("NENHUM NUMERO PAR");
    }

    return 0;
}
