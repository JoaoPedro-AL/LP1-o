#include <stdio.h>

int main (){
float n, soma = 0; 

printf("Digite 100 numeros: ");

for (int i = 0; i < 100; i++)
{
    scanf("%f", &n);

    if (n < 40)
    {
        soma += n;
    }
    
}

printf("\n%.2f", soma);

}