#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_pessoa {
    char nome[5][250];
    int idade[5];
    float peso[5], altura[5];
};


int main () {
    setlocale(LC_ALL, "");

    struct dados_pessoa pessoa;
    int i;

    for (i = 0; i < 5; i++) {
        system("cls");

        printf("%dº Pessoa:\n\n", i + 1);

        printf("Digite seu nome: ");
        gets(pessoa.nome[i]);
        printf("Digite sua idade: ");
        scanf("%d", &pessoa.idade[i]);
        printf("Digite sua peso: ");
        scanf("%f", &pessoa.peso[i]);
        printf("Digite sua idade: ");
        scanf("%f", &pessoa.altura[i]);

        fflush(stdin);
    }
    
    system("cls");

    for (i = 0; i < 5; i++) {
        printf("Nome: %s\n", pessoa.nome[i]);
        printf("Idade: %d\n", pessoa.idade[i]);
        printf("Peso: %.2f\n", pessoa.peso[i]);
        printf("Altura: %.2f\n", pessoa.altura[i]);
        printf(".......................................\n");
    }
    
}