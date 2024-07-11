#include <stdio.h>

int main()
{
    double dist1, dist2, dist3, maior_dist;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &dist1);
    scanf("%lf", &dist2);
    scanf("%lf", &dist3);

    maior_dist = 0;

    if (dist1 > maior_dist)
    {
        maior_dist = dist1;
    }
    if (dist2 > maior_dist)
    {
        maior_dist = dist2;
    }
    if (dist3 > maior_dist)
    {
        maior_dist = dist3;
    }

    printf("MAIOR DISTANCIA: %.2lf", maior_dist);

    return 0;
}
