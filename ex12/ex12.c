#include <stdio.h>

int main (){
int n, soma = 0;
float media;

printf("100 numeros: ");

for (int i = 1 ; i <= 100 ; i++)
{
    scanf("%i", &n);
    soma += n;
}

media = soma / 100.0;
printf("\n%f", media);

// esse += é pra somar o valor de N na variavel soma, ou seja, vai ir somando os valores que eu colocar pra n

}