#include <stdio.h>
#include <stdlib.h>

 void main() {
	int numeroEscolhido = 0;

	printf("Informe um número: ");
	scanf_s("%d", &numeroEscolhido);

	for (int i = 0; i < 10; ++i) {
		int resultado = numeroEscolhido * (i + 1);
		printf("%d x %d = %d\n", numeroEscolhido, i + 1, resultado);
	}
}