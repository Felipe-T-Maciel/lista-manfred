#include <stdio.h>

void main() {
	int num;
	printf("Digite um número");
	scanf("%d", &num);

	if ((num % 2) == 0)
	{
		printf("O número par");
	}
	else {
		printf("O número é impar");
	}
	return;
}