#include <stdio.h>

int main()
{
    int idade, cont;
    double media, soma;

    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if (idade < 0)
    {
        printf("IMPOSSIVEL CALCULAR");
    }
    else
    {
        soma = 0;
        cont = 0;
        while (idade >= 0)
        {
            soma += idade;
            cont += 1;
            scanf("%d", &idade);
        }
        media = soma / cont;
        printf("MEDIA = %lf", media);

    }

    return 0;
}
