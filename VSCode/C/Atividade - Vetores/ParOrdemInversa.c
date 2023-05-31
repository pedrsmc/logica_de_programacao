#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa que leia 6 números, armazenando em um vetor e informe quantos são pares e quantos são ímpares.
// Mostre os números informados pelo usuário.

int main (void) {
    setlocale(LC_ALL, "");
    int i, num[6];

    for (i = 0; i < 6; i++) {
        printf("Digite um número par: ");
        scanf("%d", &num[i]);
    }

    printf("\nValores PARES na ordem inversa:\n");

    for (i = 6; i >= 0; i--) {
        if (num[i] % 2 == 0) {
            printf("-> %d\n", num[i]);       
        }
    }
}