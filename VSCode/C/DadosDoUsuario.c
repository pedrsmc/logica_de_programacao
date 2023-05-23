#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int idade;      // inteiro
    float peso;     // real
    char nome[100]; // 99 caracteres
    char sexo;      // apenas 1 caractere

    printf("Idade: ");
    scanf("%d", &idade);

    //system("cls"); <- limpa a tela

    printf("Peso: ");
    scanf("%f", &peso);

    fflush(stdin); // limpa o buffer do teclado

    printf("Nome: ");
    gets(nome);
    // scanf("%f", &peso);

    printf("Sexo: ");
    scanf("%c", &sexo);

    system("pause");
}