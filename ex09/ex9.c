#include <stdio.h>

int main (){
    int n;

    printf("Numero: ");
    scanf("%i", &n);

    while ( n < 1 || n > 10)
    {
        printf("Somente valores entre 1 e 10");
        printf("\nTente novamente: ");
        scanf("%i", &n);
    }

    for (int i = 1 ; i <= 10 ; i++)
    {
        printf("\n%i * %i = %i", n, i, n*i);
    }

}