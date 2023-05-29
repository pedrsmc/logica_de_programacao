#include <stdio.h>
#include <stdlib.h>

// Escrever um programa de computador que leia 5 números inteiros e, ao final, apresente a soma de todos os 
// números lidos.

int main(void) {
    int sum = 0, num;

    for(int i = 0; i <= 4; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        sum += num;
    }

    printf("\nSoma = %d", sum);

}