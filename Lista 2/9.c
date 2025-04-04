#include <stdio.h>

void main() {
	float nota, soma = 0, media;
	for (int i = 1; i <= 3; i++) {
		printf("Digite a nota número %d", i);
		scanf("%f", &nota);
		soma += nota;
	}

	media = soma / 3;

	if (media < 7) {
		printf("Reprovado");
	}
	else if (media >= 7) {
		printf("Aprovado");
	}
	else {
		printf("Aprovado com Distinção");
	}
	return;
}