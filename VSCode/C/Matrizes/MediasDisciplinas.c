#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um algoritmo que receba o nome de tr�s disciplinas, receba duas notas  para cada disciplina e mostre o nome da discplina, as notas e a m�dia.

int main(void) {
    int i, j;
    char disciplinas[3][250];
    float soma, medias[3], notas[3][2];
    setlocale(LC_ALL, "");

    for (i = 0; i < 3; i++) {
        soma = 0;
        
        printf("Digite o nome da disciplina: ");
        gets(disciplinas[i]);

        for (j = 0; j < 2; j++) {
            printf("Digite a %d� nota: ", j + 1);
            scanf("%f", &notas[i][j]);

            soma += notas[i][j];
        }

        fflush(stdin);
        medias[i] = soma / j;
    }

    system("cls");

    for (i = 0; i < 3; i++) {
        printf("%s:\n\n", disciplinas[i]);
        
        for(j = 0; j < 2; j++) {
            printf("%d nota: %.1f\n", j, notas[i][j]);
        }

        printf("\n\nM�dia: %.1f\n\n", medias[i]);
    } 
}