#include <stdio.h>

void main() {
	int eleitores;
	int opcao;
	int votos_1 = 0, votos_2 = 0, votos_3 = 0;

	printf("Quantos eleitores?: ");
	scanf("%d", &eleitores);

	for (int i = 0; i < eleitores; i++) {
		printf("Em quem voce deseja votar?: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
		case 1:
			votos_1++;
			break;
		case 2:
			votos_2++;
			break;
		case 3:
			votos_3++;
			break;
		default:
			printf("votou em branco\n");
		}
	}

	printf("\n\nTotal de votos - candidato 1: %d\n", votos_1);
	printf("Total de votos - candidato 2: %d\n", votos_2);
	printf("Total de votos - candidato 3: %d\n\n", votos_3);

	printf("Percetual de votos do candidato 1 em relação ao total de eleitores: %.2f%%\n", ((double)votos_1 / eleitores) * 100);
	printf("Percetual de votos do candidato 2 em relação ao total de eleitores: %.2f%%\n", ((double)votos_2 / eleitores) * 100);
	printf("Percetual de votos do candidato 3 em relação ao total de eleitores: %.2f%%\n", ((double)votos_3 / eleitores) * 100);
}