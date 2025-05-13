#include <stdio.h>

int main (){
float l1, l2, l3, soma;

printf("Lado 1: ");
scanf("%f", &l1);

printf("Lado 2: ");
scanf("%f", &l2);

printf("Lado 3: ");
scanf("%f", &l3);

if (l1 < (l2 + l3))
{
    printf("Triangulo");

    if (l1 == l2 && l1 == l3 && l2 == l3 )
    {
        printf("\nEquilatero");
    }
    else if (l1 == l2 || l2 == l3 && l1 == l3)
    {
        printf("\nIsosceles");
    }
    else
    {
        printf("\nEscaleno");
    }
    
    
}

}