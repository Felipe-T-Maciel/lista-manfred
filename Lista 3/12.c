#include <stdio.h>

void main() {
    float soma = 0.0;

    for (int i = 1, j = 1; i <= 99; i += 2, ++j) {
        soma += (float)i / j;
    }

    printf("A soma da série S é: %.2f\n", soma);
}
