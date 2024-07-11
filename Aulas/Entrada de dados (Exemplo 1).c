#include <stdio.h>
#include <string.h>

int main()
{
    //Determinar variáveis
    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    //Atribuir valores à variáveis
    printf("Digite o valor da idade: ");
    scanf("%d", &idade);
    printf("Digite o salario: ");
    scanf("%lf", &salario);
    printf("Digite a altura: ");
    scanf("%lf", &altura);
    printf("Digite o primeiro nome da pessoa: ");
    scanf("%s", nome);

    //Imprimir variáveis
    printf("IDADE:  %d\n", idade);
    printf("SALARIO: %.2lf\n", salario);
    printf("ALTURA: %.2lf\n", altura);
    printf("NOME: %s\n", nome);

    return 0;
}
