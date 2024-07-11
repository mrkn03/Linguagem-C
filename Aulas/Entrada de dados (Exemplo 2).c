#include <stdio.h>
#include <string.h>

//Funão para limpar o buffer de entrada
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF){}
}

//Função para ler texto
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main()
{
    //Deternubar variáveis
    int idade1, idade2;
    char nome1[50], nome2[50];

    //Atribuir valores à variáveis
    printf("Digite o valor da idade 1: ");
    scanf("%d", &idade1);
    printf("Digite o nome da pessoa 1: ");
    limpar_entrada();
    ler_texto(nome1, 50);

    printf("Digite o valor da idade 2: ");
    scanf("%d", &idade2);
    printf("Digite o nome da pessoa 2: ");
    limpar_entrada();
    ler_texto(nome2, 50);

    //Imprimir variáveis
    printf("IDADE 1:  %d\n", idade1);
    printf("NOME 1: %s\n", nome1);
    printf("IDADE 2: %d\n", idade2);
    printf("NOME 2: %s\n", nome2);

    return 0;
}
