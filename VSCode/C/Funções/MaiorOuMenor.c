#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maiorOuMenor (int primeroNumero, int segundoNumero) {
    int menor, maior;
    
    if (primeroNumero > segundoNumero) {
        maior = primeroNumero;
        menor = segundoNumero;
    } else {
        maior = segundoNumero;
        menor = primeroNumero;
    }
    
    if (maior == menor) {
        printf("\nOs números são iguais!\n");
    } else {
        printf("\n\nMaior número = %d", maior);
        printf("\nMenor número = %d\n", menor);
    }
}

int main () {
    setlocale(LC_ALL, "");

    int x, y;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);
    
    printf("Digite outro número inteiro: ");
    scanf("%d", &y);

    maiorOuMenor(x, y);

    return 0;
}