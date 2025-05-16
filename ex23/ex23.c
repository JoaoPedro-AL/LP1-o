#include <stdio.h>

int main (){

    int n, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (n != 0)
    {
       if (n < 0 )
       {
        soma += n;
       }

    printf ("Digite outro numero: ");
    scanf("%d", &n);
       
    }

    printf("Soma dos negativos = %d", soma);

}