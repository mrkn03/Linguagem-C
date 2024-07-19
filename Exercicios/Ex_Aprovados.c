#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    int N, i;

    printf("Quantos alunos serao digitados? ");
    scanf("%d", &N);

    char vet_nome[N][50];
    double vet_nota1[N], vet_nota2[N];

    for (i=0; i<N; i++)
    {
        printf("Digite nome, primeira e segunda nota do %d aluno: \n", i+1);

        limpar_entrada();

        ler_texto(vet_nome[i], 50);

        scanf("%lf", &vet_nota1[i]);

        scanf("%lf", &vet_nota2[i]);
    }

    printf("\nAlunos aprovados: \n");

    for (i=0; i<N; i++)
    {
        if ((vet_nota1[i] + vet_nota2[i]) / 2 >= 6)
        {
            printf("%s \n", vet_nome [i]);
        }
    }

    return 0;
}
