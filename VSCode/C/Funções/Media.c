#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calcularMedia (float somaNotas, int qntNotas) {
   return somaNotas = somaNotas  / qntNotas;
}

void Aprovadoreprovado (float media) {
    if (media >= 7.0) {
        printf("\nAprovado!\n");
    } else {
        printf("\nReprovado!\n");
    } 
}

int main () {
    setlocale(LC_ALL, "");

    int i;
    float notas[3], soma, media;

    for (i = 0; i < 3; i++) {
        printf("Digite o valor da %dº nota: ", i + 1);
        scanf("%f", &notas[i]);

        soma += notas[i];
    }
        
    media = calcularMedia(soma, i);

    printf("\nMédia = %.1f", media);

    Aprovadoreprovado(media);

    return 0;
}