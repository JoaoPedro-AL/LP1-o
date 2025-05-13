#include <stdio.h>

int main (){
    int n, negativo = 0;
    
    printf("\nEscreva 100 valores: ");

    for ( int i = 1; i < 100; i++)
    {
        scanf("%i", &n);
        if (n < 0)
        {
            negativo++;
        }
        
    }
    
    printf("%i negativos", negativo);

}