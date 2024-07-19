#include <stdio.h>

int main()
{
    int N, i, maior_idade, pos_maior;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char vet_nome[N][50];
    int vet_idade[N];

    for (i=0; i<N; i++)
    {
        printf("Dados da %d pessoa: \n", i+1);

        printf("Nome: ");
        scanf("%s", &vet_nome[i][0]);

        printf("Idade: ");
        scanf("%d", &vet_idade[i]);
    }

    pos_maior = 0;
    maior_idade = vet_idade[0];

    for (i=0; i<N; i++)
    {
        if (vet_idade[i] > maior_idade)
        {
            maior_idade = vet_idade[i];
            pos_maior = i;
        }
    }

    printf("\nPESSOA MAIS VELHA: %s \n", vet_nome[pos_maior]);

    return 0;
}
