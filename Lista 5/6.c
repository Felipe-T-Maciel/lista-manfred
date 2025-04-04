#include <stdio.h>  
#include <stdlib.h>  

int validarEntrada(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    char entrada;
    printf("Digite um caractere: ");
    scanf(" %c", &entrada, 1);

    if (validarEntrada(entrada)) {
        printf("O caractere '%c' é um dígito decimal.\n", entrada);
    } else {
        printf("O caractere '%c' não é um dígito decimal.\n", entrada);
    }
}