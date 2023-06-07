#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float inflacione (float valorInicial) {
    float percentual, novoValor;
    
    if (valorInicial < 100) {  
       percentual = valorInicial * 0.10;
    } else {
       percentual = valorInicial * 0.20;
    }
    
    return novoValor = valorInicial + percentual;
}

int main () {
    setlocale(LC_ALL, "");

    float valor, valorInflacionado;

    printf("Digite o preço do produto: ");
    scanf("%f", &valor);

    valorInflacionado = inflacione(valor);

    printf("\nPreço a pagar = R$ %.2f.\n", valorInflacionado);

    return 0;
}