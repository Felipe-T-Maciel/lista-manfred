#include <stdio.h>

static void att11() {
    float soma = 0.0;

    for (int i = 1, j = 1; i <= 10; ++i, j += 2) {
        soma += (float)i / j;
    }

    printf("A soma da série S é: %.2f\n", soma);
}
