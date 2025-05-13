#include <stdio.h>

int main (){
    int n, intervalo = 0, subtracao;

    printf("Escreva 100 numeros: ");

    for ( int i = 0; i < 100; i++)
    {
        scanf("%i", &n);

        if (n >= 10 && n <=20)
        {
            intervalo++;
        }
        
    }

    subtracao = 100 - intervalo;
    
    printf("%i estao no intervalo e %i nao estao: ", intervalo, subtracao);


}