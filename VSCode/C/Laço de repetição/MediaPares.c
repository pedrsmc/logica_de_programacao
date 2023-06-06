#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que leia uma quantidade não determinada de números positivos. Calcule:

// a) quantidade de números pares e ímpares;
// b) média de valores pares

// O número que encerrará a leitura será zero.

int main(void)
{
    float par, impar = 0, somaPar;
    int numero;
    
    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

        if (numero >= 0) {
            
            if (numero % 2 == 0) {
                    par++;
                    somaPar += numero;
                }
            else {
                impar++;
            }
        }

    } while (numero >= 0);

    printf("\nPares: %.0f\n", par);
    printf("Impares: %.0f\n", impar);
    printf("Media de numeros pares: %.1f\n", somaPar / par);
}