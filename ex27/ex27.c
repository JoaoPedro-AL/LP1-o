#include <stdio.h>

int main (){

    int n;
    int f1 = 0, f2 = 1, fn;

    printf("Valor de termos a serem lidos: ");
    scanf("%i", &n);

    while (n < 1)
    {
        printf("Somente numero iguais ou menores que 1: ");
        scanf("%d", &n);
    }
    

    if (n == 1)
    {
        fn = f1;
    }
    else if (n == 2)
    {
        fn = f2;
    }
    
    else{
    for (int i = 3; i <= n; i++)
    {
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }
    }

    printf("O seu valor é %d", fn);


}