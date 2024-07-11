#include <stdio.h>
#include <string.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base+altura);
    diagonal = sqrt(base * base + altura *altura);

    printf("AREA: %.2lf\n", area);
    printf("PERIMETRO: %.2lf\n", perimetro);
    printf("DIAGONAL: %.2lf", diagonal);


    return 0;
}
