#include <stdio.h>
#include <stdlib.h>

// Crie um programa que leia 5 números, armazenando em um vetor e informe qual é o menor número e o maior.
// Mostre os números informados pelo usuário.

int main (void) {
    int i ,maior, menor, numeros[5];

    menor = 99999;

    for (i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] < menor) {
            menor = numeros[i];
        } else if (numeros[i] > maior) {
            maior = numeros[i];
        }    
    }

    printf("\nMaior = %d\n", maior);
    printf("Menor = %d\n", menor);
}
