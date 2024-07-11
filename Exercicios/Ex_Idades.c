 #include <stdio.h>

 int main()
 {
     char nome1[50], nome2[50];
     int idade1, idade2;
     double idade_media;

     printf("Dados da primeira pessoa: \n");
     printf("Nome: ");
     gets(nome1);
     printf("Idade: ");
     scanf("%d", &idade1);

     printf("Dados da segunda pessoa: \n");
     printf("Nome: ");
     fseek(stdin, 0, SEEK_END);
     gets(nome2);
     printf("Idade: ");
     scanf("%d", &idade2);

     idade_media = (double)(idade1 + idade2) / 2;

     printf("A idade media de %s e %s e de %.1lf", nome1, nome2, idade_media);


     return 0;
 }
