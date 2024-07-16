#include <stdio.h>

int main()
{
    int N;
    double nota1, nota2, nota3, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for (int i=1; i<=N; i++)
    {
        printf("Digite tres numeros: \n");
        scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

        media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

        printf("MEDIA = %.1lf \n", media);
    }

    return 0;
}
