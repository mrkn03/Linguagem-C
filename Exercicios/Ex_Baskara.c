#include <stdio.h>
#include <math.h>

int main()
{
    int coef_a, coef_b, coef_c, delta;
    double x1, x2;

    printf("Coeficiente A: ");
    scanf("%d", &coef_a);

    printf("Coeficiente B: ");
    scanf("%d", &coef_b);

    printf("Coeficiente C: ");
    scanf("%d", &coef_c);

    delta = (double)(coef_b * coef_b) - (4 * coef_a * coef_c);
    if (coef_a == 0 || delta < 0)
    {
        printf("Esta equacao nao possui raizes reais \n");
    }
    else
    {
        x1 = (double)((-coef_b) + sqrt(delta)) / (2 * coef_a);
        printf("X1 = %.4lf \n", x1);

        x2 = (double)((-coef_b) - sqrt(delta)) / (2 * coef_a);
        printf("X2 = %.4lf \n", x2);
    }

    return 0;
}
