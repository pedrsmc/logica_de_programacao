#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um algoritmo que receba o nome de tr�s bandas musicais e cinco integrantes para cada banda. 
// Depois imprima na tela.


int main(void) {
    setlocale(LC_ALL, "");

    int i, j;
    char bandas[3][150][5][250];

    for (i = 0; i < 3; i++) {
        printf("Digite o nome da %d� banda: ", i + 1);
        gets(bandas[i]);
        printf("\n");

        for (j = 0; j < 5; j++) {
            printf("Digite o nome do %d� integrante: ", j + 1);
            gets(bandas[i][j]);
        }

        system("cls");
    }

    printf("==================== BANDAS =====================\n");

    for (i = 0; i < 3; i++) {
        printf("%d� Banda: %s\n\n", i + 1, bandas[i]);

        for (j = 0; j < 5; j++) {
            printf("%d� Integrante: %s\n", j + 1, bandas[i][j]);
        }

        printf(".................................................\n");
    }
}
