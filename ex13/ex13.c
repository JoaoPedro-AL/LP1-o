#include <stdio.h>

int main (){
 int alunos;
 float media, notas, soma = 0;

 printf("Quantos Alunos na sala:  ");
 scanf("%i", &alunos);

 printf("Digite as notas deles: ");

 for ( int i = 1; i <= alunos; i++)
 {
    scanf("%f", &notas);

    soma += notas;
 }

 media = soma / alunos;
 printf("%.2f foi a media", media);


}