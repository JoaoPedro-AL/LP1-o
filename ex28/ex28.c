#include <stdio.h>

int main (){
    int n;
    int f1 = 0, f2 = 1, fn;

    printf("Digite o valor de termos a serem lidos: ");
    scanf("%d", &n);

    while (n < 1)
    {
        printf("Somente valor igual ou maior que 1: ");
        scanf("%d", &n);
    }

    if (n >= 1)
    {
        printf("Valor da sequencia em 1 = %d\n", f1);
    }
    
     if (n >= 2)
    {
        printf("Valor da sequencia em 2 = %d\n", f2);

        for (int i = 3; i <= n; i++)
        {
            fn = f1 + f2;
            printf("O termo %d da sequencia = %d\n", i, fn);
            f1 = f2;
            f2 = fn;

        }
    }
    
        
        

    }
    
    


