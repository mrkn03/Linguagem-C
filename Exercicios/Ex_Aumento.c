#include <stdio.h>

int main()
{
    double salario, novo_salario, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: R$");
    scanf("%lf", &salario);

    if (salario <= 1000)
    {
        porcentagem = 20;
        novo_salario = salario + (salario * porcentagem/100);
        aumento = novo_salario - salario;
    }
    else if (salario <= 3000)
    {
        porcentagem = 15;
        novo_salario = salario + (salario * porcentagem/100);
        aumento = novo_salario - salario;
    }
    else if (salario <= 8000)
    {
        porcentagem = 10;
        novo_salario = salario + (salario * porcentagem/100);
        aumento = novo_salario - salario;
    }
    else
    {
        porcentagem = 5;
        novo_salario = salario + (salario * porcentagem/100);
        aumento = novo_salario - salario;
    }

    printf("Novo salario: R$%.2lf \n", novo_salario);
    printf("Aumento: R$%.2lf \n", aumento);
    printf("Porcentagem: %d", porcentagem);

    return 0;
}
