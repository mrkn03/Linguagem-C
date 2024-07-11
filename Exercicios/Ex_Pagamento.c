#include <stdio.h>

int main()
{
    char nome[50];
    double valor_hora, pagamento;
    int horas;

    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: R$");
    scanf("%lf", &valor_hora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = (double)valor_hora * horas;
    printf("O pagamento para %s deve ser de R$%.2lf", nome, pagamento);

    return 0;
}
