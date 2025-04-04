#include <stdio.h>

void main() {
	char sexo;
	printf("Digite M para Maiusculo e F para Feminino (M/F): ");
	scanf("%s", &sexo);

	switch (sexo)
	{
	case 'M':
		printf("Masculino\n");
		break;
	case 'F':
		printf("Feminino\n");
		break;
	default:
		printf("Sexo inválido\n");
		break;
	}
}