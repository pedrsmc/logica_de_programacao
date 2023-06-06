#include <stdio.h>
#include <stdlib.h>

// Elabore um algoritmo para ler o nome de um aluno, sua idade (em anos) e as três notas.
// Calcular a média anual do aluno. Caso a média do aluno seja menor que 7, o aluno está reprovado.
// Imprimir: nome, idade, média e se está aprovado ou reprovado.

int main(void) {
    char name[100];
    int age;
    float average, grade1, grade2, grade3;

    printf("Digite seu nome: ");
    gets(name);

    fflush(stdin);

    printf("Digite sua idade: ");
    scanf("%d", &age);

    printf("Digite 1 nota: ");
    scanf("%f", &grade1);
    printf("Digite 2 nota: ");
    scanf("%f", &grade2);
    printf("Digite 3 nota: ");
    scanf("%f", &grade3);

    system("cls");

    average = (grade1 + grade2 + grade3) / 3;

    printf("Nome: %s\n", name);
    printf("Idade: %d\n", age);
    printf("Media: %.1f\n", average);

    if (average >= 7.0) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
}