#include <stdio.h>
#include <stdlib.h>

// Escreva um algoritmo que leia a média de um aluno. Caso seja menor que 0 ou maior que 10, mostre a pergunta novamente. Após receber a média, verifique se o aluno está aprovado ou reprovado considerando que a média para aprovação é maior ou igual a 7. Caso a média seja até 5, o aluno está em recuperação, caso seja menor que 5, o aluno está reprovado.

int main(void) {
    float media;

    do {
        system("cls");
        
        printf("Digite sua media: ");
        scanf("%f", &media);
    } while(media < 0 || media > 10);

    if(media >= 7.0) {
        printf("\nAprovado!");
    } else if(media >= 5.0) {
        printf("\nRecuperacao!");
    } else {
        printf("\nReprovado!");
    }
}