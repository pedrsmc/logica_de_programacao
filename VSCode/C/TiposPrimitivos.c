#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int idade = 19;      // inteiro
    float peso = 69;     // real
    char nome[100] = "Pedro"; // 99 caracteres
    char sexo = 'M';      // apenas 1 caractere

    printf("Idade: %d\n", idade);
    printf("Peso: %.1f\n", peso);
    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
}