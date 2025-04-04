#include <stdio.h>

void main() {
    int populacaoA = 80000;
    int populacaoB = 200000;
    double taxaCrescimentoA = 0.03;
    double taxaCrescimentoB = 0.015;
    int anos = 0;

    while (populacaoA < populacaoB) {
        populacaoA += populacaoA * taxaCrescimentoA;
        populacaoB += populacaoB * taxaCrescimentoB;
        anos++;
    }

    printf("Número de anos necessários para que a população do país 'A' ultrapasse ou iguale a população do país 'B': %d\n", anos);
}
