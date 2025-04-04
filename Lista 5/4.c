#include <stdio.h>  
#include <stdlib.h>  

void desenha(int linhas, int colunas) {
	if (linhas <= 24 && linhas > 2 && colunas <= 79 && colunas > 2) {
		for (int i = 0; i < linhas; i++){
			for (int j = 0; j < colunas; j++){
				if (i == 0 || i == linhas - 1) {
					if (j == 0 || j == colunas - 1) {
						printf("+");
					} else {
						printf("-");
					}
				} else {
					if (j == 0 || j == colunas - 1) {
						printf("|");
					} else {
						printf(" ");
					}
				}
			}
			printf("\n");
		}
	}
}

int main() {
	int linhas, colunas;
	printf("Digite o numero de linhas: ");
	scanf("%d", &linhas);
	printf("Digite o numero de colunas: ");
	scanf("%d", &colunas);

	desenha(linhas, colunas);
	return 0;
}