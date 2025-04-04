#include <stdio.h>

void main() {
    float lado1, lado2, lado3;

    printf("primeiro lado: ");
    scanf("%f", &lado1);
    printf("segundo lado: ");
    scanf("%f", &lado2);
    printf("terceiro lado: ");
    scanf("%f", &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        printf("é um triangulo\n");

        if (lado1 == lado2 && lado2 == lado3) {
            printf("equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("isósceles.\n");
        } else {
            printf("escaleno.\n");
        }
    } else {
        printf("nao é um triângulo.\n");
    }
}