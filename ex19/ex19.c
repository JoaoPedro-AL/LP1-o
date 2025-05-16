#include <stdio.h>

int main  (){
    int n, soma = 0;

    printf("Digite 10 numeros");
    for (int i = 0; i < 10; i++)
    {
        scanf("%i", &n);

        if (n % 2 == 0)
        {
            soma += n;
        }
        
        
    }
    
printf("Soma %i", soma);

}