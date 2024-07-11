#include <stdio.h>

int main()
{
    char escala;
    double temp_f, temp_c;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &escala);

    if (escala == 'F')
    {
        printf("Digite a temperatura em Fahrenheit: ");
            scanf("%lf", &temp_f);

        temp_c = (double)5 / 9 * (temp_f - 32);
        printf("Temperatura equivalente em Celsius: %.2lfº", temp_c);
    }
    else
    {
        printf("Digite a temperatura em Celsius: ");
            scanf("%lf", &temp_c);

        temp_f = temp_c * 9 / 5 + 32;
        printf("Temperatura em Fahrenheit: %.2lf", temp_f);
    }

    return 0;
}
