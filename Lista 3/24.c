#include <stdio.h>

void main() {
	float picl1 = 1.0, picl2 = 1.2, picl3 = 2.5;
	float total_vendido;
	int quantidade_vendida_1 = 0, quantidade_vendida_2 = 0, quantidade_vendida_3 = 0;
	int dias, opcao_picole;
	char opcao;

	printf("Periodo de vendas (dias): ");
	scanf("%d", &dias);

	do {
		printf("Picolés\n");
		printf("1 - R$1,00\n");
		printf("2 - R$1,20\n");
		printf("3 - R$2,50\n");
		printf("Qual deseja?: ");
		scanf("%d", &opcao_picole);
		switch (opcao_picole)
		{
		case 1:
			quantidade_vendida_1++;
			break;
		case 2:
			quantidade_vendida_2++;
			break;
		case 3:
			quantidade_vendida_3++;
			break;
		default:
			printf("Opcao invalida");
		}
		printf("Deseja comprar mais picolés?: \n");
		scanf(" %c", &opcao, 1);
	} while(opcao == 's');

	total_vendido = (quantidade_vendida_1 * picl1) + (quantidade_vendida_2 * picl2) + (quantidade_vendida_3 * picl3);

	printf("Tipo 1 - %d picolés vendidos\n", quantidade_vendida_1);
	printf("Tipo 2 - %d picolés vendidos\n", quantidade_vendida_2);
	printf("Tipo 3 - %d picolés vendidos\n\n", quantidade_vendida_3);

	printf("Faturamento tipo 1 %.2f\n", quantidade_vendida_1 * picl1);
	printf("Faturamento tipo 2 %.2f\n", quantidade_vendida_2 * picl2);
	printf("Faturamento tipo 3 %.2f\n\n", quantidade_vendida_3 * picl3);

	if (quantidade_vendida_1 > quantidade_vendida_2 && quantidade_vendida_1 > quantidade_vendida_3) {
		printf("O picole do tipo 1 foi o mais vendido, o mesmo representa %.2f %% do faturamento", ((quantidade_vendida_1*picl1) / total_vendido)*100);
	} else 	if (quantidade_vendida_2 > quantidade_vendida_1 && quantidade_vendida_2 > quantidade_vendida_3) {
		printf("O picole do tipo 2 foi o mais vendido, o mesmo representa %.2f %% do faturamento", ((quantidade_vendida_2 * picl2) / total_vendido) * 100);
	} else if (quantidade_vendida_3 > quantidade_vendida_1 && quantidade_vendida_3 > quantidade_vendida_2) {
		printf("O picole do tipo 3 foi o mais vendido, o mesmo representa %.2f %% do faturamento", ((quantidade_vendida_3 * picl3) / total_vendido) * 100);
	}
	
	printf("\n\nTotal faturado %.2f: ", total_vendido);
}