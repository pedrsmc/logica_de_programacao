#include <stdio.h>
#include <stdlib.h>

int main (void) {
    float n1, n2;
    float media;

    printf("Digite a 1 nota: ");
    scanf("%f", &n1);

    printf("Digite a 2 nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;
    printf("\nMedia = %.1f\n", media);

    if (media >= 7.0) {
        printf("APROVADO!");
    } else if (media >= 5.0) {
        printf("RECUPERACAO!");
    } else {
        printf("REPROVADO!");
    }
}