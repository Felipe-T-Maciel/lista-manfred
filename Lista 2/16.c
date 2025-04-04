#include <stdio.h>

void main() {
    int temperatura;

    printf("temperatura: ");
    scanf("%d", &temperatura);

    if (temperatura >= 1000) {
        printf("Temperatura Inválida!! Deve ser inferior a 1000.\n");
    } else if (temperatura <= 500) {
        printf("Temperatura Inválida\n");
    } else if (temperatura < 700) {
        printf("Aquecimento Ligado em 100%%\n");
    } else if (temperatura < 735) {
        printf("Aquecimento Ligado em 50%%\n");
    } else if (temperatura <= 780) {
        printf("Aquecimento Desligado\n");
    } else {
        printf("SUPERAQUECIMENTO\n");
    }
}