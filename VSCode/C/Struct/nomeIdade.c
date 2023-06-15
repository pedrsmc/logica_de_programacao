#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma estrutura.
// Mostre os dados do usuário.

struct dados_pessoa {
    char nome[250];
    int idade;
};

struct endereco {
    char cidade[100];
    char bairro[100];
    char rua[250];
    int num;
};

int main () {
    setlocale(LC_ALL, "");

    struct dados_pessoa pessoa;
    struct endereco endereco;

    printf("Digite o nome: ");
    gets(pessoa.nome);
    printf("Digite a idade: ");
    scanf("%d", &pessoa.idade);
    fflush(stdin);
    printf("Digite a cidade: ");
    gets(endereco.cidade);
    printf("Digite o bairro: ");
    gets(endereco.bairro);
    printf("Digite a rua: ");
    gets(endereco.rua);
    printf("Digite o número da casa: ");
    scanf("%d", &endereco.num);
    fflush(stdin);

    system("cls");

    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d\n", pessoa.idade);
    printf("%s, %d - %s, %s.\n", endereco.rua, endereco.num, endereco.bairro, endereco.cidade);

    return 0;
}
