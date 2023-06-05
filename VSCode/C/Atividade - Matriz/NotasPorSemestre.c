#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    int i, j, semestres[3];
    float notas[2][3];
    setlocale(LC_ALL, "");

    for (i = 0; i < 2; i++) {
        printf("%dº semestre:\n\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("Valor da %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);
        }

        printf("\n");
    }

    system("cls");

    printf("=================== GRADE DE NOTAS =================== \n\n");

    for (i = 0; i < 2; i++) {
        printf("%dº semestre:\n\n", i + 1);

        for (j = 0; j < 3; j++) {
            printf("%dº nota: %.1f         ", j + 1, notas[i][j]);
        }

        printf("\n------------------------------------------------------\n\n");
    }
}