#include <stdio.h>

void main() {
    int quantidade = 0;
    float soma = 0.0, media;

    printf("Informe a quantidade de notas: ");
    scanf_s("%d", &quantidade);

    float* notas = (float*)malloc(quantidade * sizeof(float));

    printf("Digite as notas:\n");
    for (int i = 0; i < quantidade; ++i) {
        scanf_s("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / quantidade;

    printf("A média bimestral da turma é: %.2f\n", media);

    free(notas);
}
