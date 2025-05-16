#include <stdio.h>

int main (){
    int habitantes, cordosolhos, cordoscabelos, idade, maior = 0, habitantesfemininos18a25 = 0;
    char sexo;

    printf("Numero de habitantes: ");
    scanf("%d", &habitantes);

    for (int i = 1; i <= habitantes; i++)
    {
        printf("Habitante %d\n", i);
        
        printf("Qual o seu sexo? (M ou F): ");
        scanf(" %c", &sexo);

        printf("Cor dos olhos?(1 - azuis, 2 - castanhos, 3 - pretos): ");
        scanf("%d", &cordosolhos);

        printf("Cor dos Cabelos (1 - louros, 2 - castanhos, 3 - pretos): ");
        scanf("%d", &cordoscabelos);

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade > maior)
        {
           maior = idade;
        }

        if ((sexo == 'F') && (idade >= 18 && idade <= 35) && (cordosolhos == 2 && cordoscabelos == 3))
        {
            habitantesfemininos18a25++;
        }
        
        
    }

    printf("Maior: %d", maior);
    printf("Habitantes do sexo feminino entre 18 e 35 anos que tenham olhos castanhos e cabelos pretos: %d", habitantesfemininos18a25);
    

}