#include <stdio.h>

int main()
{
    int distancia;
    double combustivel, consumo;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel gasto: ");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;
    printf("Consumo medio = %lf", consumo);

    return 0;
}
