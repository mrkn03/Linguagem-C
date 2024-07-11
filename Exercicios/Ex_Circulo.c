#include <stdio.h>

int main()
{
    double raio, area;

    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);

    area = 3.14169 * (raio * raio);
    printf("AREA = %lf", area);


    return 0;
}
