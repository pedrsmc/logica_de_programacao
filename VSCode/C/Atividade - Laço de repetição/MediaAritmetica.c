#include <stdio.h>
#include <stdlib.h>

// Escreva um algoritmo que pergunte ao usuário se deseja inserir mais uma nota, se a resposta do usuário for “NÃO”, o programa fará a média aritmética das notas informadas e mostrará a média aritmética para o usuário.
// Obs.: Use um contador dentro do laço de repetição para contar a quantidade e iterações (loops).

int main(void) {
    int i;
    float sum, avg, grades[100];
    char awnser;

    do {
        i++;

        printf("Digite a %d nota: ", i);
        scanf("%f", &grades[i]);

        sum += grades[i];

        printf("\nDeseja digitar mais alguma nota (s/n): ");
        scanf("%s", &awnser);
        printf("\n..........................................\n\n");
    } while(awnser == 's');

    avg = sum / i;

    printf("Media = %.1f\n", avg);
}