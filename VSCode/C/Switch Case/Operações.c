#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int opcao, n[2], i;

    printf("1 - Soma.\n");
    printf("2 - Subtra��o.\n");
    printf("3 - Multiplica��o.\n");
    printf("4 - Divis�o.\n\n");

    printf("Digite o n�mero referente a opera��o que deseja realizar: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        system("cls");

        printf("Soma:\n\n");

        for (i = 0; i < 2; i++) {
            printf("Digite um n�mero: ");
            scanf("%d", &n[i]);
        }

        printf("\n%d + %d = %d\n", n[0], n[1], n[0] + n[1]);
    
        break;
    }

    return 0;
}