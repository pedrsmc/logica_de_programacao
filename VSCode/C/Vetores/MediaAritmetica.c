#include <stdio.h>
#include <stdlib.h>

// Crie um programa que leia 3 notas, armazenando em um vetor e calcule a média aritmética.
// Mostre as 3 notas informadas pelo usuário e informe a média.

int main (void) {
    int i;
    float soma, media, notas[3];

    for (i = 0; i < 3; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    
    printf("...........................\n\n");
    printf("Media = %.1f\n", soma / i);
}