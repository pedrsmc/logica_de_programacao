#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
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

        sleep(5); // Para o código por 5 segundos
        system("cls");
    } while (codigo != 0);

    return 0;
}
