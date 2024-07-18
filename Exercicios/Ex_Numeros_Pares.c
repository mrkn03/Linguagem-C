#include <stdio.h>

int main()
{
    int N, i, cont_pares;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);


    int vet_num[N];

    for(i=0; i<N; i++)
    {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vet_num[i]);
    }

    printf("\nNUMEROS PARES: \n");

    cont_pares =0;
    for (i=0; i<N; i++)
    {
        if (vet_num[i] % 2 == 0)
        {
            printf("[%d] ", vet_num[i]);
            cont_pares ++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d", cont_pares);

    return 0;
}
