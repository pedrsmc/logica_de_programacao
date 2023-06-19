#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova.
// Permita ao usuário entrar com os dados de 5 alunos;
// Informe a maior nota da primeira prova;
// Informe a maior media geral;
// Informe a menor media geral;
// Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.

struct dados_aluno {
    char nome[250];
    int matricula;
    float nota[3], media;
};

int main() {
    setlocale(LC_ALL, "");

    float soma, maior, menor = INT_MAX, maiorProva;
    int i, j;
    struct dados_aluno aluno[5];


    for (i = 0; i < 5; i++) {
        system("cls");
        
        printf("================= CADASTRO DE ALUNOS ================\n\n");
        printf("%dº aluno:\n\n", i + 1);

        printf("Digite o nome do aluno: ");
        gets(aluno[i].nome);
        printf("Matrícula do aluno: ");
        scanf("%d", &aluno[i].matricula);

        for (j = 0; j < 3; j++) {
            printf("Nota da %dº prova: ", j + 1);
            scanf("%f", &aluno[i].nota[j]);

            soma += aluno[i].nota[j];
        }
        
        aluno[i].media = soma / j;
        soma = 0;
        fflush(stdin);
    }

    system("cls");

    printf("================ RESULTADO =================\n");
    
    for (i = 0; i < 5; i++) {
        if (aluno[i].media < menor) {
            menor = aluno[i].media;
        } 

        if (aluno[i].media > maior) {
            maior = aluno[i].media;
        }

        for (j = 0; j < 3; j++) {
            if (aluno[i].nota[j] > maiorProva) {
                maiorProva = aluno[i].nota[j];
            }
        }
    }

    printf("Maior média geral: %.2f\n", maior);
    printf("Menor média geral: %.2f\n", menor);
    printf("Maior nota da 1º prova: %.2f", maiorProva);

    printf("\n============================================\n");

    for (i = 0; i < 5; i++) {
        if (aluno[i].media >= 6.0) {
            printf("%s = APROVADO!", aluno[i].nome);
        } else {
            printf("%s = REPROVADO!", aluno[i].nome);
        }
        
        printf("\n............................................\n");
    }

    return 0;
}