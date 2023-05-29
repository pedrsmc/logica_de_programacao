#include <stdio.h>
#include <stdlib.h>

// Escreva um algoritmo que leia 5 valores inteiros e ao final mostre:
// a) quantos números são pares;
// b) quantos números são impares;

int main(void) {
    int even = 0, odd = 0, num;

    for(int i = 0; i <= 4; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if(num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("\nPares: %d", even);
    printf("\nImpares: %d", odd);

}