#include <stdio.h>
#include <stdlib.h>

static void att5() {
    int quantidade = 0;

    printf("Informe a quantidade de turmas: ");
    while (scanf_s("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Entrada inválida! Informe um número válido de turmas:\n");
        while (getchar() != '\n');
    }

    int* turmas = (int*)malloc(quantidade * sizeof(int));
    if (turmas == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    printf("Digite quantos alunos tem em cada turma:\n");
    for (int i = 0; i < quantidade; ++i) {
        while (1) {
            printf("Turma %dº: ", i + 1);
            if (scanf_s("%d", &turmas[i]) == 1 && turmas[i] >= 1 && turmas[i] <= 40) {
                break;
            }
            else {
                printf("Número inválido. Digite novamente (1 a 40).\n");
                while (getchar() != '\n'); 
            }
        }
    }

    printf("\nAlunos em cada turma:\n");
    for (int i = 0; i < quantidade; ++i) {
        printf("Turma %dº: %d alunos\n", i + 1, turmas[i]);
    }

    free(turmas);
}
