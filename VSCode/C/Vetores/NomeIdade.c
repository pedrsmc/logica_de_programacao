#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Crie um algoritmo que leia o nome e a idade de 5 pessoas,armazenando em vetores.
// Liste o nome e a idade de cada pessoa.

int main (void) {
    setlocale(LC_ALL, "");
    char nomes[5][250];
    int i, idades[5];

    for (i = 0; i < 5; i++) {
        printf("%dº Pessoa:\n\n", i + 1);

        printf("Nome: ");
        gets(nomes[i]);

        printf("Idade: ");
        scanf("%d", &idades[i]);
        
        fflush(stdin);
        
        system("cls");
    }

    for (i = 0; i < 5; i++) {
        printf("%dº Pessoa:\n\n", i + 1);

        printf("Nome: %s", nomes[i]);
        printf("\nIdade: %d", idades[i]);
        printf("\n.................................\n");
    }
}