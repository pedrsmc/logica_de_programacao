#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Suponha que você esteja desenvolvendo um programa para o caixa da mercearia do seu bairro.
// Esse programa deve ser capaz de somar o valor unitário de um produto do comércio recebendo como entrada apenas o código identificador dele.
// Para verificar o bom funcionamento da funcionalidade de soma de valor através do código você decidiu realizar testes apenas com 
// uma parte dos produtos vendidos, para isso criou a seguinte tabela:
// Detergente - 1.59
// Esponja - 4.59
// Lã de aço - 1.79

int main() {
    setlocale(LC_ALL, "");

    int codigo, i;

    do {
        i++;
        system("cls");

        printf("100 - Detergente.\n");
        printf("101 - Esponja.\n");
        printf("102 - Lã de aço.\n");

        printf("\nDigite o código: ");
        scanf("%d", &codigo);

        if (codigo != 0) {
            printf("Quantidade do produto: ");
            scanf("%d", &i);
        }

        switch (codigo) {
        case 100:
            printf("\nTotal = %.2f\n", 1.59 * i);
            break;
        case 101:
            printf("\nTotal = %.2f\n", 4.59 * i);
            break;
        case 102:
            printf("\nTotal = %.2f\n", 1.79 * i);
            break;
        case 0:
        printf("\nSaindo...");
            break;
        default:
            printf("\nDigite um código válido.\n");
            break;
        }

        sleep(5);
        system("cls");
    } while (codigo != 0);

    return 0;
}
