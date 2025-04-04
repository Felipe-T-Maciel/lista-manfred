#include <stdio.h>

void main() {
    int num, centenas, dezenas, unidades;

    printf("Digite um número inteiro menor que 1000: ");
    scanf("%d", &num);

    if (num >= 1000 || num < 0) {
        printf("Número inválido!\n");
        return;
    }

    centenas = num / 100;
    dezenas = (num % 100) / 10;
    unidades = num % 10;

    if (centenas > 0) {
        printf("%d %s", centenas, (centenas == 1) ? "centena" : "centenas");
        if (dezenas > 0 || unidades > 0) {
            printf(", ");
        }
    }

    if (dezenas > 0) {
        printf("%d %s", dezenas, (dezenas == 1) ? "dezena" : "dezenas");
        if (unidades > 0) {
            printf(" e ");
        }
    }

    if (unidades > 0) {
        printf("%d %s", unidades, (unidades == 1) ? "unidade" : "unidades");
    }

    printf("\n");
}