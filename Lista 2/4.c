#include <stdio.h>

void main() {
	int num;
	printf("Digite um número");
	scanf("%d", &num);

	if ((num % 2) == 0)
	{
		printf("O número par");
		printf("\nNúmero transformado: %d", num + 1);
	}
	else {
		printf("O número é impar");
		printf("\nNúmero transformado: %d", num + 1);
	}
	return;
}