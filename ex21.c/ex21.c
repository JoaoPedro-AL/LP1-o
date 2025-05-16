#include <stdio.h>

int main (){
    int base, expoente, resultado = 1;

    printf("Base: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);

    for (int i = 1; i <= expoente; i++)
    {
        resultado *= base;
    }

    printf("Resultado = %d", resultado);
    


}