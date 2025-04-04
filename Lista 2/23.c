#include <stdio.h>

void main() {
	int valorSaque;
	int notas100, notas50, notas10, notas5, notas1;

	do {
		printf("Informe o valor do saque (minimo R$10, maximo R$600): ");
		scanf("%d", &valorSaque);
	} while (valorSaque < 10 || valorSaque > 600);

	notas100 = valorSaque / 100;
	valorSaque %= 100;

	notas50 = valorSaque / 50;
	valorSaque %= 50;

	notas10 = valorSaque / 10;
	valorSaque %= 10;

	notas5 = valorSaque / 5;
	valorSaque %= 5;

	notas1 = valorSaque;

	printf("Notas 100 - %d\n", notas100);
	printf("Notas 50 - %d\n", notas50);
	printf("Notas 10 - %d\n", notas10);
	printf("Notas 5 - %d\n", notas5);
	printf("Notas 1 - %d", notas1);
	return;
}