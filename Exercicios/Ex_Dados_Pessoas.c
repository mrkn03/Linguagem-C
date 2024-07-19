#include <stdio.h>

int main()
{
    int N, i, qnt_homens, qnt_mulher;
    double menor_alt, maior_alt, media_fem, alturas_fem;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char vet_sexo[N];
    double vet_altura[N];

    for (i=0; i<N; i++)
    {
        printf("Altura da %da pessoa: ", i+1);
        scanf("%lf", &vet_altura[i]);

        printf("Genero da %da pessoa:(F/M) ", i+1);
        scanf(" %c", &vet_sexo[i]);
    }

    maior_alt = vet_altura[0];
    menor_alt = vet_altura[0];

    for(i=0; i<N; i++)
    {
        if (vet_altura[i] > maior_alt)
        {
            maior_alt = vet_altura[i];
        }
        if (vet_altura[i] < menor_alt)
        {
            menor_alt = vet_altura[i];
        }
    }

    qnt_homens = 0;
    qnt_mulher = 0;
    alturas_fem = 0;

    for (i=0; i<N; i++)
    {
        if(vet_sexo[i] = 'M')
        {
            qnt_homens++;
        }
        else
        {
            qnt_mulher++;
            alturas_fem = alturas_fem + vet_altura[i];
        }
    }

    media_fem = (double)alturas_fem / qnt_mulher;

    printf("\nMenor altura: %.2lf \n", menor_alt);
    printf("Maior altura: %.2lf \n", maior_alt);
    printf("Media das alturas das mulheres: %.2lf \n", media_fem);
    printf("Quantidade de homens: %d", qnt_homens);

    return 0;
}
