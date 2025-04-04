#include <stdio.h>

void main() {
    int ano;

    printf("ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("ano bissexto.\n");
    } else {
        printf("não é bissexto.\n");
    }
}