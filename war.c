#include <stdio.h>
#include <string.h>

/*
    Definição da struct Territorio
    Essa estrutura agrupa informações relacionadas a um território:
    - nome do território
    - cor do exército
    - quantidade de tropas
*/
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {
    // Declaração de um vetor para armazenar 5 territórios
    Territorio territorios[5];

    printf("=== Cadastro de Territórios ===\n\n");

    // Laço para entrada de dados dos territórios
    for (int i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);

        printf("Digite o nome do território: ");
        scanf("%29s", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf("%9s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("\n=== Territórios Cadastrados ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}