#include <stdio.h>
#include <stdlib.h>

// Elabore um algoritmo para receber dois inteiros como entrada do teclado e escreva na tela: 
// A média, a soma, o produto, o menor valor e o maior valor.
// Além disso, verifique se os números informados pelo usuário são iguais. 
// Usando uma linha para cada resultado. 


int main(void) {
    float average;
    int num1, num2, sum, product, bigger, smaller;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    smaller = num1;
    bigger = num1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num2);

    if (num2 > num1) {
        bigger = num2;
    } else {
        smaller = num2;
    }

    system("cls");

    product = num1 * num2;
    sum = num1 + num2;
    average = sum / 2;

    printf("Media = %.1f\n", average);
    printf("Soma = %d\n", sum);
    printf("Produto = %d\n", product);
    
    if(bigger != smaller) {
        printf("Maior valor = %d\n", bigger);
        printf("Menor valor = %d\n", smaller);
    } else {
        printf("Os numeros sao iguais!\n");
    }
}