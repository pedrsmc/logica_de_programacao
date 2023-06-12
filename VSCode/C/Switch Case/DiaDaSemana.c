#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Desenvolva um programa que receba como entrada um n�mero inteiro que represente um dos 7 dias da semana e imprima na tela se esse dia � �til, final de semana ou inv�lido.
// Considere que Domingo � o dia 1 e S�bado o dia 7.

int main () {
    setlocale(LC_ALL, "");

    int opcao;

    printf("Digite um n�mero: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("Segunda-Feira.\n");
        break;
    case 3:
        printf("Ter�a-Feira.\n");
        break;
    case 4:
        printf("Quarta-Feira.\n");
        break;
    case 5:
        printf("Quinta-Feira.\n");
        break;
    case 6:
        printf("Sexta-Feira.\n");
        break;
    case 7:
        printf("S�bado.\n");
        break;
    default:
        printf("Digite apenas n�meros inteiros de 1 a 7.\n");
        break;
    }

    return 0;
}