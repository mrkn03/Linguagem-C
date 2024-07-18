#include <stdio.h>

int main()
{
    int N, i;
    double soma_vet, media_vet;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    double vet[N];

    for (i=0; i<N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma_vet = 0;
    for (i=0; i<N; i++)
    {
        soma_vet = soma_vet + vet[i];
    }

    media_vet = (double)soma_vet / N;
    printf("MEDIA DO VETOR = %.3lf", media_vet);

    printf("ELEMENTOS ABAIXO DA MEDIA: \n");
    for (i=0; i<N; i++)
    {
        if (vet[i] < media_vet)
        {
            printf("%.2lf \n", vet[i]);
        }
    }


    return 0;
}
