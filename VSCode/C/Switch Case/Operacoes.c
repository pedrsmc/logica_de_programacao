#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void soma () {
    int i, soma = 0, numeros[2];

    for (i = 0; i < 2; i++) {
        printf("Digite %d� n�mero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    printf("\n\nResultado = %d", soma);
}

int main () {
    setlocale(LC_ALL, "");

    int opcao;

    do {

        system("cls");

        printf("0 - Sair.\n");
        printf("1 - Soma.\n");
        printf("2 - Subtra��o.\n");
        printf("3 - Multiplica��o.\n");
        printf("4 - Divis�o.\n\n");

        printf("Digite o n�mero referente a opera��o que deseja realizar: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 0:
            printf("\nSaindo...");
            break;
        case 1:
            system("cls");
            soma();
            break;
        }
        
        sleep(3);
        system("cls");
    } while (opcao != 0);

    return 0;
}