#include <stdio.h>

int main()
{
    int N, i;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int vet_a[N];

    printf("Digite os valores do vetor A: \n");
    for (i=0; i<N; i++)
    {
        scanf("%d", &vet_a[i]);
    }

    int vet_b[N];

    printf("Digite os valores do vetor B: \n");
    for (i=0; i<N; i++)
    {
        scanf("%d", &vet_b[i]);
    }

    int vet_result[N];

    printf("VETOR RESULTANTE: \n");
    for (i=0; i<N; i++)
    {
        vet_result[i] = vet_a[i] + vet_b[i];
        printf("%d \n", vet_result[i]);
    }


    return 0;
}
