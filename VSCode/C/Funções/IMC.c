#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Escreva um programa que solicite ao utilizador o fornecimento do seu peso em kg e de sua altura em m e a partir deles calcule o índice de massa corpórea do utilizador.

float calculeImc(float peso, float altura) {
    return peso / (altura * altura);
}

int main () {
    setlocale(LC_ALL, "");

    float peso, altura, imc;

    printf("Digite seu peso (Kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (M): ");
    scanf("%f", &altura);

    imc = calculeImc(peso,altura);

    printf("IMC: %.2f\n", imc);

    return 0;
}