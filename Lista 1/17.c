#include <stdio.h>

void main() {
  int qtd_parafuso, qtd_rosca, qtd_porca, qtd_total;
  float preco_parafuso = 3.00, preco_rosca = 1.00, preco_porca = 0.50;
  float desconto_parafuso = 0.02, desconto_rosca = 0.027, desconto_porca = 0.025;
  float total_parafuso, total_rosca, total_porca, total_geral;

  printf("Informe a quantidade de parafusos: ");
  scanf("%d", &qtd_parafuso);
  printf("Informe a quantidade de roscas: ");
  scanf("%d", &qtd_rosca);
  printf("Informe a quantidade de porcas: ");
  scanf("%d", &qtd_porca);

  qtd_total = qtd_parafuso + qtd_rosca + qtd_porca;

  total_parafuso = (qtd_parafuso * preco_parafuso) * (1 - desconto_parafuso);
  total_rosca = (qtd_rosca * preco_rosca) * (1 - desconto_rosca);
  total_porca = (qtd_porca * preco_porca) * (1 - desconto_porca);
  total_geral = total_parafuso + total_rosca + total_porca;
  printf("\n\n======================================");
  printf("\n| Quant | Produto   | Unit.Bruto | Total c/ Desc. |");
  printf("\n| %5d | Parafuso  | %10.2f | %14.2f |", qtd_parafuso, preco_parafuso, total_parafuso);
  printf("\n| %5d | Rosca     | %10.2f | %14.2f |", qtd_rosca, preco_rosca, total_rosca);
  printf("\n| %5d | Porca     | %10.2f | %14.2f |", qtd_porca, preco_porca, total_porca);
  printf("\n\nTotal de itens: %d", qtd_total);
  printf("\nValor total: %.2f\n", total_geral);

}
