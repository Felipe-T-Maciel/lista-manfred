#include <stdio.h>  
#include <stdlib.h>  

int retorna(int num) {
	if (num % 2 == 0)
	{
		return 0;
	}
	else {
		return 1;
	}
}

void main() {
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (retorna(num))
	{
		printf("é par");
	}
	else {
		printf("é impar");
	}
}