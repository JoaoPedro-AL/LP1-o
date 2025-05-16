#include <stdio.h>

int main (){
int habitantes, idade, quantidadedemulheresate100 = 0, maior = 0, menor = 200; 
float salario, valordetodosossalarios = 0, media;
char sexo;

printf("Quantidade de habitantes: ");
scanf("%d", &habitantes);

for (int i = 0; i < habitantes; i++)
{
    printf("Habitante %d\n", i);

    printf("Qual o seu sexo? (M / F): ");
    scanf(" %c", &sexo);

    printf("Qual a sua idade: ");
    scanf("%d", &idade);

    printf ("Salario: ");
    scanf("%f", &salario);

    valordetodosossalarios += salario;

    if (idade > maior)
    {
        maior = idade;
    }
    if (idade < menor)
    {
        menor = idade;
    }

    if (sexo == 'F' && salario <= 100)
    {
        quantidadedemulheresate100++;
    }

}
    media = valordetodosossalarios / habitantes;

    printf("\nMedia salarial: %.2f\n", media);
    printf("Maior idade: %d\n", maior);
    printf("Menor idade: %d\n", menor);
    printf("Quantidade de mulheres com salario ate 100: %d\n", quantidadedemulheresate100);





}