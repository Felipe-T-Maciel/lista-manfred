#include <stdio.h>

void main() {
	float num;
	printf("Digite um número: ");
	scanf("%f", &num);
	if (num == (int)num) {
		printf("O número é inteiro\n");
	}
	else {
		printf("O número é quebrado\n");
	}
	return;
}