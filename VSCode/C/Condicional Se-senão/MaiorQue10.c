#include <stdio.h>
#include <stdlib.h>

// Elabore um algoritmo para ler um valor e escrever a mensagem: “É MAIOR QUE 10!”.
// Se o valor lido for maior que 10, caso contrário escrever “NÃO É MAIOR QUE 10!"
// Verifique se o número digitado é igual a 10, caso seja, escreva a mensagem: "O número é igual a 10!"

int main(void) {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num > 10) {
        printf("Maior que 10!");
    } else if (num == 10) {
        printf("Igual a 10!");
    } else {
        printf("Menor que 10!");
    }
}