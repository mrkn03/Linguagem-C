#include <stdio.h>

int main()
{
    int N, i, pos_maior;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);


    double vet_num[N];

    for (i=0; i<N; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet_num[i]);
    }

    maior = vet_num[0];
    pos_maior = 0;

    for (i=0; i<N; i++)
    {
        if (vet_num[i] > maior)
        {
            maior = vet_num[i];
            pos_maior = i;
        }
    }

    printf("\nMAIOR VALOR: %lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d", pos_maior);



    return 0;
}
