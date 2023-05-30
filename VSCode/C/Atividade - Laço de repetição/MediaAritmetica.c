#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um algoritmo que pergunte ao usuário se deseja inserir mais uma nota, se a resposta do usuário for “NÃO”, o programa fará a média aritmética das notas informadas e mostrará a média aritmética para o usuário.
// Obs.: Use um contador dentro do laço de repetição para contar a quantidade e iterações (loops).

int main (void) {
    int i;
    float soma, media, notas[100];
    char resposta[4];

    do {
        i++;

        printf("Digite a %d nota: ", i);
        scanf("%f", &notas[i]);

        fflush(stdin);

        soma += notas[i];

        printf("\nDeseja digitar mais alguma nota (sim/nao): ");
        gets(resposta);
        printf("..............................................\n\n");

    } while (strcmp(resposta, "sim") == 0);

    media = soma / i;

    printf("Media = %.1f\n", media);
}
