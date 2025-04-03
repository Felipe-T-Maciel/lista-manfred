#include <stdio.h>
#include <stdlib.h>

static void att6() {
	int quantidade = 0;
	printf("De quantos cds nos referimos: ");
	scanf_s("%d", &quantidade);

	int* cds = (int*)malloc(quantidade * sizeof(int));

	for (int i = 0; i < quantidade; ++i){
		printf("Valor do CD %d°: ", i + 1);
		scanf_s("%d", &cds[i]);
	}

	printf("Valores dos Cds:\n");
	for (int i = 0; i < quantidade; ++i) {
		printf("CD %d°: %d \n", i, cds[i]);
	}
	free(cds);
}