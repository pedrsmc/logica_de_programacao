#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa que leia 6 n�meros, armazenando em um vetor e informe quantos s�o pares e quantos s�o �mpares.
// Mostre os n�meros informados pelo usu�rio.

int main (void) {
    setlocale(LC_ALL, "");
    int i, num[6];

    for (i = 0; i < 6; i++) {
        printf("Digite um n�mero par: ");
        scanf("%d", &num[i]);
    }

    printf("\nValores PARES na ordem inversa:\n");

    for (i = 6; i >= 0; i--) {
        if (num[i] % 2 == 0) {
            printf("-> %d\n", num[i]);       
        }
    }
}