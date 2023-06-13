#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int opcao, n[2], i;

    printf("1 - Soma.\n");
    printf("2 - Subtração.\n");
    printf("3 - Multiplicação.\n");
    printf("4 - Divisão.\n\n");

    printf("Digite o número referente a operação que deseja realizar: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        system("cls");

        printf("Soma:\n\n");

        for (i = 0; i < 2; i++) {
            printf("Digite um número: ");
            scanf("%d", &n[i]);
        }

        printf("\n%d + %d = %d\n", n[0], n[1], n[0] + n[1]);
    
        break;
    }

    return 0;
}
