#include <stdio.h>

void main() {
  int num_maquinas, qtd_motor_20cv = 1, qtd_motor_1cv = 2, qtd_motor_5cv = 3;
  float preco_motor_20cv = 1500.0, preco_motor_1cv = 300.0, preco_motor_5cv = 600.0;
  float custo_por_maquina, custo_total, custo_motor_20cv, custo_motor_5cv, custo_motor_1cv;

  printf("Informe a quantidade de máquinas a serem adquiridas: ");
  scanf("%d", &num_maquinas);

  custo_motor_20cv = num_maquinas * (qtd_motor_20cv * preco_motor_20cv);
  custo_motor_5cv = num_maquinas * (qtd_motor_5cv * preco_motor_5cv);
  custo_motor_1cv = num_maquinas * (qtd_motor_1cv * preco_motor_1cv);

  custo_por_maquina = custo_motor_20cv + custo_motor_5cv + custo_motor_1cv;
  custo_total = num_maquinas * custo_por_maquina;

  printf("\n======================================");
  printf("\nQuantidade de motores adquiridos:");
  printf("\nMotores de 20 CV: %d", num_maquinas * qtd_motor_20cv);
  printf("\nMotores de 1 CV: %d", num_maquinas * qtd_motor_1cv);
  printf("\nMotores de 5 CV: %d", num_maquinas * qtd_motor_5cv);
  printf("\n======================================");

  printf("\n\n======================================");
  printf("\nResumo dos custos:");
  printf("\nCusto total da compra: R$ %.2f", custo_total);
  printf("\nCusto por máquina: R$ %.2f", custo_por_maquina);
  printf("\n======================================");

  printf("\n\n======================================");
  printf("\nCusto detalhado por tipo de motor:");
  printf("\nMotores de 20 CV: R$ %.2f", custo_motor_20cv);
  printf("\nMotores de 5 CV: R$ %.2f", custo_motor_5cv);
  printf("\nMotores de 1 CV: R$ %.2f", custo_motor_1cv);
  printf("\n======================================\n");

}
