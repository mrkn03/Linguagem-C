#include <stdio.h>

int main()
{
    int x, n, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &x);

    dentro =0;
    fora = 0;

    for (int i=1; i<x+1; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);

        if (n < 10 || n > 20)
        {
            fora ++;
        }
        else
        {
            dentro ++;
        }
    }

    printf("%d DENTRO \n", dentro);
    printf("%d FORA \n", fora);

    return 0;
}
