#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int codigo;

    printf("100 - Detergente.\n");
    printf("101 - Esponja.\n");
    printf("102 - Lã de aço.\n\n");
    
    printf("Digite o código: ");
    scanf("%d", &codigo);

    switch (codigo) {
    case 100:
        printf("Preço: R$ 1,59.\n");
        break;
    case 101:
        printf("Preço: R$ 4,59.\n");
        break;
    case 102:
        printf("Preço: R$ 1,79.\n");
        break;
    default:
        printf("Digite um código válido.\n");
        break;
    }

    return 0;
}