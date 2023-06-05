#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    int i, j, semestres[3];
    float soma, medias[2], notas[2][3];
    setlocale(LC_ALL, "");

    for (i = 0; i < 2; i++) {
        soma = 0;

        printf("%dº semestre:\n\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("Valor da %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        medias[i] = soma / j;

        printf("\n");
    }

    system("cls");

    printf("=================== GRADE DE NOTAS =================== \n\n");

    for (i = 0; i < 2; i++) {
        printf("Média do %dº semestre: %.1f\n\n", i + 1, medias[i]);

        for (j = 0; j < 3; j++) {
            printf("%dº nota: %.1f         ", j + 1, notas[i][j]);
        }

        printf("\n------------------------------------------------------\n\n");
    }
}