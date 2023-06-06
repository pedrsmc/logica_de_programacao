#include <stdio.h>
#include <stdlib.h>

// Escreva um algoritmo que leia 5 valores inteiros e ao final mostre:
// a) quantos números são pares;
// b) quantos números são impares;

int main(void) {
    int i, par = 0, impar, num;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if(num % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    printf("\nPares: %d", par);
    printf("\nImpares: %d", impar);
}