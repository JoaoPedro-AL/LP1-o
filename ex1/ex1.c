#include <stdio.h>

int main (){
    float num1, num2, num3;

    printf("Primeiro Numero: ");
    scanf("%f", &num1);

    printf("Segundo numero: ");
    scanf("%f", &num2);

    printf("Terceiro numero: ");
    scanf("%f", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%.2f", num1);
    } 
    else if (num2 > num1 && num2 > num3)
    {
        printf("%.2f", num2);
    }
    else 
    {
        printf("%.2f", num3);
    }
    


}