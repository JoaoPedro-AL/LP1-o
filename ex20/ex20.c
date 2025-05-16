#include <stdio.h>

int main (){
    int n, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%i", &n);

 
       for (int i = 1; i <= n; i++) {
        fatorial *= i;
       }
       printf("Fatorial de %i é %i\n", n, fatorial);
    


}