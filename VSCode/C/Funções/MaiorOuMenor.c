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
        printf("\nOs n�meros s�o iguais!\n");
    } else {
        printf("\n\nMaior n�mero = %d", maior);
        printf("\nMenor n�mero = %d\n", menor);
    }
}

int main () {
    setlocale(LC_ALL, "");

    int x, y;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);
    
    printf("Digite outro n�mero inteiro: ");
    scanf("%d", &y);

    maiorOuMenor(x, y);

    return 0;
}