#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    int codigo;

    printf("100 - Detergente.\n");
    printf("101 - Esponja.\n");
    printf("102 - L� de a�o.\n\n");
    
    printf("Digite o c�digo: ");
    scanf("%d", &codigo);

    switch (codigo) {
    case 100:
        printf("Pre�o: R$ 1,59.\n");
        break;
    case 101:
        printf("Pre�o: R$ 4,59.\n");
        break;
    case 102:
        printf("Pre�o: R$ 1,79.\n");
        break;
    default:
        printf("Digite um c�digo v�lido.\n");
        break;
    }

    return 0;
}