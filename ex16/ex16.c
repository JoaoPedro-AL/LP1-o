#include <stdio.h>

int main (){
int num, maior, menor;
float media = 0, soma;

printf("Primeiro valor: ");
scanf("%i", &num);

maior = num;
menor = num;
media += num;

printf("Digite os outros valores: ");
for (int i = 1; i < 100; i++)
{
   scanf("%i", &num);
   media += num;

   if (num > maior)
   {
    maior = num;
   }
   if (num < menor)
   {
    menor = num;
   }

}

soma = media/100.0;
printf("media %.2f, \nmenor %i, \nmaior %i", soma, menor, maior);




}