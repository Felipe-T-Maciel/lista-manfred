#include <stdio.h>

void main() {
    int base, expoente;
    long resultado = 1;

    printf("Digite a base: ");
    scanf_s("%d", &base);

    printf("Digite o expoente: ");
    scanf_s("%d", &expoente);

    for (int i = 0; i < expoente; ++i) {
        resultado *= base;
    }

    printf("%d elevado a %d é: %ld\n", base, expoente, resultado);
}
