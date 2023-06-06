#include <stdio.h>
#include <stdlib.h>

// Elabore um algoritmo usando operações lógicas para informar se uma pessoa é obrigada a votar.
// Considere que a regra é que menores de 18 e maiores que 65 não são obrigados a votar.

int main(void) {
    int age;

    printf("Digite sua idade: ");
    scanf("%d", &age);

    if (age < 18 || age > 65) {
        printf("Voto nao obrigatorio.\n");
    } else {
        printf("Voto obrigatorio!\n");
    }
}