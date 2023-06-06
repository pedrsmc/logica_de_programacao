#include <stdio.h>
#include <stdlib.h>

// Escrever um programa de computador que leia 5 números inteiros e, ao final, apresente a soma de todos os números lidos.

int main (void) {
    int i, soma = 0, num;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        soma += num;
    }

    printf("\nSoma = %d", soma);
}