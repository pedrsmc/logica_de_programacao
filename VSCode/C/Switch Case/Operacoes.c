#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void divisao () {
    int i;
    float numeros[2], divisao = 0;

    for (i = 0; i < 2; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    divisao = (numeros[0] / numeros[1]);
    
    printf("\nResultado = %.1f", divisao);
}

void multip () {
    int i, numeros[2], multiplicacao = 1;

    for (i = 0; i < 2; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);

        multiplicacao *= numeros[i];
    }
    
    printf("\nResultado = %d", multiplicacao);
}

void subtracao () {
    int i, numeros[2], subtracao = 0;

    for (i = 0; i < 2; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    subtracao = (numeros[0] - numeros[1]);
    
    printf("\nResultado = %d", subtracao);
}

void soma () {
    int i, soma = 0, numeros[2];

    for (i = 0; i < 2; i++) {
        printf("Digite %dº número: ", i + 1);
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
        printf("2 - Subtração.\n");
        printf("3 - Multiplicação.\n");
        printf("4 - Divisão.\n\n");

        printf("Digite o número referente a operação que deseja realizar: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 0:
            printf("Saindo...");
            break;
        case 1:
            system("cls");
            soma();
            break;
        case 2:
            system("cls");
            subtracao();
            break;
        case 3:
            system("cls");
            multip();
            break;
        case 4:
            system("cls");
            divisao();
            break;
        default:
            printf("Digite uma opção válida!");
            break;
        }
        
        sleep(3);
        system("cls");
    } while (opcao != 0);

    return 0;
}