#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Implemente um programa que leia as informações de um livro com os seguintes dados:
// Nome
// Autor
// Categoria
// Preço
// Armazene os dados em uma estrutura com vetor para 3 livros. Mostre os dados do livro.

struct dados_livro {
    char nome[3][250], autor[3][250], categoria[3][250];
    float preco[3];
};

int main() {
    setlocale(LC_ALL, "");

    int i;
    struct dados_livro livro;

    for (i = 0; i < 3; i++) {
        system("cls");

        printf("Digite o nome do livro: ");
        gets(livro.nome[i]);
        printf("Digite o autor: ");
        gets(livro.autor[i]);
        printf("Digite a categoria: ");
        gets(livro.categoria[i]);
        printf("Digite o preço: ");
        scanf("%f", &livro.preco[i]);
        fflush(stdin);
    }
    
    system("cls");
    
    for (i = 0; i < 3; i++) {
        printf("Nome: %s", livro.nome[i]);
        printf("\nAutor: %s", livro.autor[i]);
        printf("\nCategoria: %s", livro.categoria[i]);
        printf("\nPreço: R$%.2f\n", livro.preco[i]);
        printf("........................................\n\n");
    }

    return 0;
}