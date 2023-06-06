#include <stdio.h>
#include <stdlib.h>

// Crie um programa que leia 4 notas, armazenando em um vetor e calcule a média aritmética.
// Verifique a situação do aluno considerando:
// Média maior ou igual a 7: Aprovado.
// Média maior ou igual a 5: Recuperação.
// Média menor que 5: Reprovado.
// Mostre as 4 notas informadas pelo usuário e informe a média.

int main (void) {
    int i;
    float soma, media, notas[4];

    for (i = 0; i < 4; i++) {
        printf("Digite a %d nota: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
    
    printf("\nMedia = %.1f\n", soma / i);

    if ((soma / i) >= 7.0) {
        printf("Aprovado!\n");
    } else if ((soma / i) >= 5.0) {
        printf("Recuperacao!\n");
    } else {
        printf("Reprovado!\n");
    }
}