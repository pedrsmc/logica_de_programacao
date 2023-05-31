#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie um programa que leia 6 números, armazenando em um vetor e informe quantos são pares e quantos são ímpares.
// Mostre os números informados pelo usuário.

int main (void) {
    setlocale(LC_ALL, "");
    int i, par = 0, impar = 0, num[6];

    for (i = 0; i < 6; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &num[i]);

        if(num[i] % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }
    
    printf("\nPares: %d", par);
    printf("\nÍmpares: %d\n", impar);
}