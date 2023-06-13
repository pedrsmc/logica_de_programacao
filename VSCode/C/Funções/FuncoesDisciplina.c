#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Usando funções, crie um algoritmo que leia 3 disciplinas e 2 notas para cada uma delas. 
// [1] - Mostrar nome da disciplina e a média; 
// [2] - O nome da disciplina e a situação (aprovado, reprovado ou recuperação); 
// [3] Exibir todas as informações; 
// [0] - Sair do programa. 
// Utilize o switch-case. 
// Verifique cada nota, impedindo que o programa continue caso a nota informada seja maior que 10 ou menor que 0; 

void todasInformacoes (char disciplina[][250], float media[]) {
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("%s:\n", disciplina[i]);
        printf("\nMédia = %.1f\n\n", media[i]);

         if (media[i] >= 7.0) {
            printf("Aprovado!\n\n");
        } else if (media[i] >= 5.0) {
            printf("Recuperação!\n\n");
        } else {
            printf("Reprovado!\n\n");
        }
    }
}

void mediaDisciplina (char disciplina[][250], float media[]) {
    int i;
    
    for (i = 0; i < 3; i++) {
        printf("%s:\n", disciplina[i]);
        printf("\nMédia = %.1f\n\n", media[i]);
    }  
}

void mostrarSituacao (char disciplina[][250], float media[]) {
     int i;
    
    for (i = 0; i < 3; i++) {
        printf("%s:\n", disciplina[i]);

        if (media[i] >= 7.0) {
            printf("Aprovado!\n\n");
        } else if (media[i] >= 5.0) {
            printf("Recuperação!\n\n");
        } else {
            printf("Reprovado!\n\n");
        }
    }  
}

int main() {
    setlocale(LC_ALL, "");

    int i, j, opcao;
    char disciplinas[3][250];
    float soma, medias[3], notas[3][2];

    for (i = 0; i < 3; i++) {
        soma = 0;
        printf("Digite o nome da disciplina: ");
        gets(disciplinas[i]);

        for (j = 0; j < 2; j++) {
            do {
                printf("Digite a %dº nota: ", j + 1);
                scanf("%f", &notas[i][j]);

                if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Digite uma nota válida!");
                    sleep(3);
                    system("cls");
                    printf("Digite o nome da disciplina: %s\n", disciplinas[i]);
                }

            } while (notas[i][j] < 0 || notas[i][j] > 10);

            soma += notas[i][j];
        }

        fflush(stdin);
        medias[i] = soma / j;
    }

    do {
        system("cls");

        printf("1 - Mostrar nome da disciplina e a média;\n");
        printf("2 - O nome da disciplina e a situação (aprovado, reprovado ou recuperação);\n");
        printf("3 - Exibir todas as informações;\n");
        printf("0 - Sair do programa.\n");

        printf("\nDigite a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                system("cls");
                mediaDisciplina(disciplinas, medias);
                break;
            case 2:
                system("cls");
                mostrarSituacao(disciplinas, medias);
                break;
            case 3:
                system("cls");
                todasInformacoes(disciplinas, medias);
                break;
            case 0:
                printf("Saindo...");
                break;
            default:
                system("cls");
                printf("Digite um número correspondente a sua nescessidade!");
                break;
        }

    sleep(5);
    system("cls"); 
    } while (opcao != 0);

    return 0;
}