#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Desenvolva um programa que receba como entrada um número inteiro que represente um dos 7 dias da semana e imprima na tela se esse dia é útil, final de semana ou inválido.
// Considere que Domingo é o dia 1 e Sábado o dia 7.

int main () {
    setlocale(LC_ALL, "");

    int opcao;

    printf("Digite um número: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Domingo.\n");
        break;
    case 2:
        printf("Segunda-Feira.\n");
        break;
    case 3:
        printf("Terça-Feira.\n");
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
        printf("Sábado.\n");
        break;
    default:
        printf("Digite apenas números inteiros de 1 a 7.\n");
        break;
    }

    return 0;
}