#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa que leia 6 n�meros, armazenando em um vetor e informe quantos s�o pares e quantos s�o �mpares.
// Mostre os n�meros informados pelo usu�rio.

int main (void) {
    setlocale(LC_ALL, "");
    int i, par = 0, impar = 0, num[6];

    for (i = 0; i < 6; i++) {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    printf("\nPares: %d", par);
    printf("\n�mpares: %d\n", impar);
}