#include <stdio.h>

int main()
{
    double a, b, c, area_quadrado, area_triangulo, area_trapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);

    printf("Digite a medida B: ");
    scanf("%lf", &b);

    printf("Digite a medida C: ");
    scanf("%lf", &c);

    area_quadrado = a * a;
    printf("AREA DO QUADRADO = %.2lf \n", area_quadrado);

    area_triangulo = (double)(a * b) / 2;
    printf("AREA DO TRIANGULO = %.2lf \n", area_triangulo);

    area_trapezio = (double)(a + b) * (c / 2);
    printf("AREA DO TRAPEZIO = %.2lf \n", area_trapezio);

    return 0;
}
