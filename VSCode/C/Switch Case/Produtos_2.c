#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int codigo, i;

    do {
        i++;
        system("cls");

        printf("100 - Cachorro Quente.\n");
        printf("101 - Bauru Simples.\n");
        printf("102 - Bauru com ovo.\n");
        printf("103 - Hambúrguer.\n");
        printf("104 - Cheeseburguer.\n");
        printf("105 - Refrigerante.\n");

        printf("\nDigite o código: ");
        scanf("%d", &codigo);

        if (codigo != 0) {
            printf("Quantidade do produto: ");
            scanf("%d", &i);
        }

        switch (codigo) {
        case 100:
            printf("\nTotal = %.2f\n", 1.70 * i);
            break;
        case 101:
            printf("\nTotal = %.2f\n", 2.30 * i);
            break;
        case 102:
            printf("\nTotal = %.2f\n", 2.60 * i);
            break;
        case 103:
            printf("\nTotal = %.2f\n", 2.40 * i);
            break;
        case 104:
            printf("\nTotal = %.2f\n", 2.50 * i);
                break;
        case 105:
            printf("\nTotal = %.2f\n", 1.00 * i);
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
