#include <stdio.h>

int main() {
    int habitantes, numerodefilhos, totaldefilhos = 0;
    float salario, somasalario = 0, maiorsalario = 0, menorque150 = 0;

    printf("Numero de habitantes: ");
    scanf("%i", &habitantes);

    for (int i = 0; i < habitantes; i++) {
        printf("\nHabitante %i\n", i + 1);

        printf("Salario: ");
        scanf("%f", &salario);

        printf("Numero de filhos: ");
        scanf("%i", &numerodefilhos);

        somasalario += salario;
        totaldefilhos += numerodefilhos;

        if (salario > maiorsalario) {
            maiorsalario = salario;
        }

        if (salario < 150.00) {
            menorque150++;
        }
    }

    float mediasalario = somasalario / habitantes;
    float mediafihos = (float)totaldefilhos / habitantes;
    float percentualMenor150 = (menorque150 * 100.0) / habitantes;

    printf("\nMedia de salario: %.2f", mediasalario);
    printf("\nMedia de filhos: %.2f", mediafihos);
    printf("\nMaior salario: %.2f", maiorsalario);
    printf("\nPercentual com salario < R$150,00: %.2f%%", percentualMenor150);

}