#include <stdio.h>

int main()
{
    int valor1, valor2, valor3, menor;

    printf("Primeiro valor: ");
    scanf("%d", &valor1);

    printf("Segundo valor: ");
    scanf("%d", &valor2);

    printf("Terceiro valor: ");
    scanf("%d", valor3);

    menor = 999;
    if (valor1 < menor)
    {
        menor = valor1;
    }
    if (valor2 < menor)
    {
        menor = valor2;
    }
    if (valor3 < menor)
    {
        menor = valor3;
    }

    printf("MENOR VALOR = %d", menor);

    return 0;
}
