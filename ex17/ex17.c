#include <stdio.h>

int main (){
int n, num, maior;
float soma = 0, media;

printf("Quantos valores serao lidos?: ");
scanf("%i", &n);

printf("Qual o primeiro valor?: ");
scanf("%i", &num);

maior = num;
soma += num;

printf("Digite os outros valores: ");

for (int i = 1; i < n; i++)
{
    scanf("%i", &num);
    soma += num;

    if (num > maior)
    {
        maior = num;
    }
    
}

media = soma / n;
printf("Media %.2f e o maior %i", media, maior);


}