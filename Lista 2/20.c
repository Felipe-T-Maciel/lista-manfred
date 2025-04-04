#include <stdio.h>


void main() {
    int dia, mes, ano;
    int bissexto = 0;

    printf("data: ");
    if (scanf("%d/%d/%d", &dia, &mes, &ano) != 3) {
        printf("erro.\n");
        return 1;
    }

    if (ano <= 0) {
        printf("ano invalido. deve ser maior que zero.\n");
        return 1;
    }

    if (mes < 1 || mes > 12) {
        printf("mes invalido. deve estar entre 1 e 12.\n");
        return 1;
    }

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        bissexto = 1;
    }

    if (dia < 1 || (mes == 2 && bissexto && dia > 29) || 
        (mes == 2 && !bissexto && dia > 28) || 
        ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) || 
        (dia > 31)) {
        printf("dia invalido para o mes informado.\n");
        return 1;
    }

    printf("a data %02d/%02d/%04d é valida.\n", dia, mes, ano);
}