#include <stdio.h>

int main (){
int n, multiplicacao = 1;


printf("Digite um numero: ");
scanf("%d", &n);

while (n != 0)
{
    if (n % 2 == 0)
    {
        multiplicacao *= n;
    }
    
    printf("Digite outro numero: ");
    scanf("%d", &n);
}

printf("O produto de todos os pares é = %d", multiplicacao);


}