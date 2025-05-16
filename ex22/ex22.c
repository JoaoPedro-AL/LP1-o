#include <stdio.h>
int main (){
    int n, intervalo1 = 0, intervalo2 = 0 , intervalo3 = 0, intervalo4 = 0;

    printf("Numero: ");
    scanf("%d", &n);

    while (n >= 0)
    {
        if (n >= 0 && n <=25 )
        {
            intervalo1 += 1;
        }
        else if (n >= 26 && n <= 50)
        {
            intervalo2 += 1;
        }
        else if (n >= 51 && n <= 75)
        {
            intervalo3 += 1;
        }
        else if (n >= 76 && n <= 100)
        {
            intervalo4 += 1;
        }

        printf("Proximo numero: ");
        scanf("%d", &n);

    }

    printf("Valores entre 0 e 25: %d\n", intervalo1);
    printf("Valores entre 26 e 50: %d\n", intervalo2);
    printf("Valores entre 51 e 75: %d\n", intervalo3);
    printf("Valores entre 76 e 100: %d\n", intervalo4);    
    





}