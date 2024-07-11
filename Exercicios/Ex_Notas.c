#include <stdio.h>

int main()
{
    double nota1, nota2, nota_final;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    nota_final = (double)(nota1 + nota2) / 2;
    if (nota_final < 60)
    {
        printf("Nota final = %.2lf \n", nota_final);
        printf(" -REPROVADO");
    }
    else
    {
        printf("Nota final = %.2lf\n", nota_final);
        printf(" -APROVADO");
    }
    return 0;
}
