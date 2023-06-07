#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tabuada (int numero) {
    int i, resultado;

    for (i = 0; i < 10; i++) {
        resultado = numero * (i + 1);
        
        printf("\n%d X %d = %d\n", numero, i + 1, resultado);
    }  
}

int main () {
    setlocale(LC_ALL, "");

    int num;

    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    tabuada(num);

    return 0;
}