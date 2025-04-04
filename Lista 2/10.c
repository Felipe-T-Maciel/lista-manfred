#include <stdio.h>

void main() {
	float idade, soma = 0, media;
	for (int i = 1; i <= 4; i++) {
		printf("Digite a idade do %dº aluno: ", i);
		scanf("%f", &idade);
		soma += idade;
	}

	media = soma / 3;

	if (media < 25) {
		printf("Turma Jovem");
	}
	else if (media >= 25 && media <= 40) {
		printf("Turma Adulta");
	}
	else {
		printf("Turma Idosa");
	}
}