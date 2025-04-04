#include <stdio.h>

void main() {
	char vogais[5] = {'A', 'E', 'I', 'O', 'U'};
	char letra;

	printf("Digite uma letra qualquer: ");
	scanf_s("%c", &letra, 1);

	for (int i = 0; i < 5; i++) {
		if (toupper(letra) == vogais[i]) {
			printf("Vogal\n");
			return;
		}
		else
		{
			printf("Consoante");
			return;
		}
	}
}