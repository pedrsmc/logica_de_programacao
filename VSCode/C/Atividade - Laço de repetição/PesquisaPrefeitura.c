#include <stdio.h>
#include <stdlib.h>

// A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:

// a) total de famílias que responderam a pesquisa;
// b) média do salário da população;
// c) média do número de filhos;

// O final da leitura de dados se dará com a entrada de um salário negativo.

int main (void) {
    float somaS, somaF, mediaS, mediaF, valorS;
    int qntdadeFilhos, totalF;

    do {
        printf("Cadastro %d\n\n", totalF + 1);
        printf("Digite o valor do salario: ");
        scanf("%f", &valorS);

        if (valorS >= 0) {
            printf("Digite a quantidade de filhos: ");
            scanf("%d", &qntdadeFilhos);
            printf("..................................\n\n");

            totalF++;
            somaS += valorS;
            somaF += qntdadeFilhos;
        }

    } while (valorS >= 0);

    printf("..................................\n\n");
    printf("Total de familias = %d\n", totalF);
    printf("Media salarial = %.2f\n", somaS / totalF);
    printf("Media da quantiade de filhos = %.1f\n", somaF / totalF);
}