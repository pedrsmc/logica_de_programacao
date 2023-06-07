#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float conversaoCm (float valorM) {
    float valorCm = valorM * 100;

    return valorCm;
}

int main () {
    setlocale(LC_ALL, "");

    float valorM, valorCm;

    printf("Digite um valor em metros que deseja converter: ");
    scanf("%f", &valorM);

    valorCm = conversaoCm(valorM);

    printf("\n%.2f M equivale a %.0f CM.\n", valorM, valorCm);

    return 0;
}