#include <stdio.h>

int main(){

    printf("Bom dia\n");
    printf("Boa noite\n");


    return 0;
}

int main(){

    int x, y;

    x = 10;
    y = 20;

    printf("%d\n", x);
    printf("%d\n", y);

    return 0;
}

int main(){

    double x;

    x = 2.3456;

    printf("%.2lf\n", x);

    return 0;
}

int main(){

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 32;
    salario = 4560.9;
    strcpy(nome, "Maria Silva");
    sexo = 'F';

    printf("A funcionaria %s, sexo %c, ganha %.2lf e tem %d anos\n", nome, sexo, salario, idade);


    return 0;
}
