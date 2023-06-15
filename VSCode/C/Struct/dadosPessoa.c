#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Crie um programa usando Struct com as informações abaixo:
// Nome
// Idade
// Peso
// Altura
// Mostre os dados do usuário.

struct dados_pessoa {
    char nome[250];
    int idade;
    float peso, altura;
};

int main () {
    setlocale(LC_ALL, "");

    struct dados_pessoa pessoa;

    strcpy(pessoa.nome, "Maria"); // Para inserir strings em variáveis.
    pessoa.idade = 24;
    pessoa.peso = 72.2;
    pessoa.altura = 1.72;

    printf("Nome: %s", pessoa.nome);
    printf("\nIdade: %d", pessoa.idade);
    printf("\nPeso: %.2f", pessoa.peso);
    printf("\nAltura: %.2f\n", pessoa.altura);

    return 0;
}
