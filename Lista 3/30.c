#include <stdio.h>

void main() {  
char nome[100];
int soma = 0, i = 0, numeroDaSorte;

printf("Digite seu nome completo: ");
scanf("%s", nome);

while (nome[i] != '\0') {
    soma += (nome[i] - 'A' + 1);
    i++;
}

numeroDaSorte = soma % 9;

printf("Seu Numero da Sorte é: %d\n", numeroDaSorte);
}