#include <stdio.h>

void main(){
    char turno;
    printf("Em que turno voce trabalha: ");
    printf("\nN - Noturno");
    printf("\nV - Vespertino");
    printf("\nM - Matutino\n");
    scanf("%c", &turno);

    switch (turno)
    {
    case 'N':
        printf("Boa Noite!");
        break;
    case 'V':
        printf("Boa Tarde!");
        break;
    case 'M':
        printf("Bom Dia!");
        break;
    default:
        printf("Valor Inválido!");
        break;
    }
}