#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "");
    float soma, numeros[10];
    int i, cont;

    for (i = 0; i < 10; i++) {
        printf("Digite um n�mero: ");
        scanf("%f", &numeros[i]);

        if (numeros[i] > 0.0) {
            soma += numeros[i];
        } else {
            cont++;
        } 
    }

    printf("\nSoma de n�meros positivos: %.1f\n", soma);
    printf("Quantidade de n�meros negativos: %d\n", cont);
}