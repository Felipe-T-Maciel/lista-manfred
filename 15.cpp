#include <stdio.h>

static void att15() {
    int numero, invertido = 0;

    printf("Digite um número inteiro positivo: ");
    scanf_s("%d", &numero);

    while (numero > 0) {
        invertido = invertido * 10 + (numero % 10);
        numero /= 10;
    }

    printf("Número invertido: %d\n", invertido);
}
