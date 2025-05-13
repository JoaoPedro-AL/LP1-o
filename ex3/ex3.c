#include <stdio.h>

int main (){
    float num1, num2, num3, maior, meio, menor;

    printf("Primeiro Numero: ");
    scanf("%f", &num1);

    printf("Segundo numero: ");
    scanf("%f", &num2);

    printf("Terceiro numero: ");
    scanf("%f", &num3);

    //PRIMEIRO
    if (num1 >= num2 && num1 >= num3)
    {
        maior = num1;

        if (num2 >= num3)
        {
            meio = num2;
            menor = num3;
        }
        else
        {
            meio = num3;
            menor = num2;
        }
    }

    //SEGUNDO
    if (num2 >= num1 && num2 >= num3)
    {
        maior = num2;

        if (num1 >= num3)
        {
            meio = num1;
            menor = num3;
        }
        else
        {
            meio = num3;
            menor = num1;
        }
        
    }

    //TERCEIRO
    if (num3 >= num2 && num3 >=num1)
    {
        maior = num3;

        if (num2 >= num1)
        {
            meio = num2;
            menor = num1;
        }
        else
        {
            meio = num1;
            menor = num2;
        }
    }

    printf("%.2f\n%.2f\n%.2f\n", menor, meio, maior);
    
    
    



}