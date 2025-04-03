#include <stdio.h>

static void att13() {
    float soma = 0.0;

    for (int i = 37, j = 1; i >= 1; --i, ++j) {
        soma += (float)(i * (i + 1)) / j;
    }

    printf("A soma da série S é: %.2f\n", soma);
}
