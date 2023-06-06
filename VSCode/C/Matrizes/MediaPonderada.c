#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um algoritmo que receba o nome de três disciplinas, receba três notas para  cada disciplina e mostre a média ponderada de cada disciplina. 


int main(void) {
    setlocale(LC_ALL, "");

    int i, j, p[3];
    char nomeDisci[3][150];
    float notas[3][3], medias[3], soma;

    p[0] = 3;
    p[1] = 3;
    p[2] = 4;

    for (i = 0; i < 3; i++) {
        soma = 0;

        printf("Digite o nome da matéria: ");
        gets(nomeDisci[i]);

        for (j = 0; j < 3; j++) {
            printf("Digite a %dº nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j] * p[j];
        }

        fflush(stdin);

        medias[i] = soma / 10;

        printf("\n");
    }

    system("cls");

    printf("======================= GRADE DE NOTAS ========================\n");

    for (i = 0; i < 3; i++) {
        printf("%s:\n\n", nomeDisci[i]);

        for (j = 0; j < 3; j++) {
            printf("%dº nota: %.1f    ", j + 1, notas[i][j]);
        }

        printf("Média = %.1f", medias[i]);
        printf("\n...............................................................\n\n");
    }
}