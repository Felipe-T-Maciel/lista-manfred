#include <stdio.h>

void main() {
	int velocidade;

	do {
		printf("\nQual a velocidade: ");
		scanf("%d", &velocidade);
		if (velocidade >= 1 && velocidade < 30) {
			printf("Marcha 1\n");
		}
		else if (velocidade >= 30 && velocidade < 40) {
			printf("Marcha 2\n");
		}
		else if (velocidade >= 40 && velocidade < 60) {
			printf("Marcha 3\n");
		}
		else if (velocidade >= 60 && velocidade < 80) {
			printf("Marcha 4\n");
		}
		else if (velocidade >= 80) {
			printf("Marcha 5\n");
		}
	} while (velocidade > 0);

	printf("Veiculo parado");
}