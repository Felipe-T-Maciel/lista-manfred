#include <stdio.h>

void main() {
    char repetir;

    do {
        int soma = 0;

        for (int i = 100; i <= 200; i++) {
            if (i % 2 == 0) {
                soma += i;
            }
        }

        printf("A soma dos números pares entre 100 e 200 é: %d\n", soma);

        printf("Deseja repetir a operação? (s/n): ");
        scanf_s(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');
}
