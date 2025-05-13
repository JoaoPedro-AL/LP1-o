#include <stdio.h>

int main (){
    float p1, p2, media;

    printf("Nota P1: ");
    scanf("%f", &p1);

    while ( p1 < 0 || p1 >10 )
    {
        printf("Somente valores de 0 a 10, tente novamente: ");
        scanf("%f", &p1);
    }

    printf("Nota P2: ");
    scanf("%f", &p2);

    while ( p2 <0 || p2 >10 )
    {
        printf("Somente valores de 0 a 10, tente novamente: ");
        scanf("%f", &p2);
    }

    media = ( p1 + p2 ) / 2;
    printf("\nMedia = %.2f\n", media);
}