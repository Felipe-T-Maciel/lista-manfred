#include <stdio.h>

void main()
{
	float num;
	printf("Digite um número");
	scanf("%f", &num);

	if (num <= 0)
	{
		printf("O número negativo");
	}else {
		printf("O número é positivo");
	}
	return;
}