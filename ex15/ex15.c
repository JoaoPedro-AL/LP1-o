#include <stdio.h>

int main (){
int n1, n2;
float soma = 0;

printf("Digite n1: ");
scanf("%i", &n1);

printf("Digite n2: ");
scanf("%i", &n2);

if (n1 < n2)
{
    for (int i = n1; i <= n2; i++)
    {
        soma += i;
    }
    
}
else
{
    for (int i = n2; i <= n1; i++)
    {
        soma += i;
    }
    
}

printf("\n %.2f soma", soma);



}