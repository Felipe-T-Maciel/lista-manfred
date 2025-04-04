#include <stdio.h>

void main() {
    int numeros[10] = {0};
    int pares = 0, impares = 0, soma = 0;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; ++i) {
        scanf_s("%d", &numeros[i]);
        soma += numeros[i];
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Soma de todos os números: %d\n", soma);
}
