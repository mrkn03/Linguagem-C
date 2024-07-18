#include <stdio.h>

int main()
{
    int N, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N], soma, media;

    soma = 0;

    for (i=0; i<N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

        soma = soma + vet[i];
    }

    media = soma / N;

    printf("VALORES: ");
    for (i=0; i<N; i++)
    {
        printf("[%.1lf] ", vet[i]);
    }

    printf("\n");
    printf("SOMA = %.1lf \n", soma);
    printf("MEDIA = %.1lf \n", media);

    return 0;
}
