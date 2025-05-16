#include <stdio.h>

int main (){
int n, primo = 1;

printf("Valor do numero: ");
scanf("%d", &n);

if (n <= 1)
{
    printf("Não é primo");
    return 0;
}



else if (n > 1)
{
    for (int i = 2; i <= n/2; i++)
    {
        if ( n % i == 0)
        {
            primo = 0;
        }
        
    }
    
}

if (primo == 0)
{
    printf("Nao primo");
}
else{
    printf("Primo");
}




}