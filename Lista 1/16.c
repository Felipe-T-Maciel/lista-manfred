#include <stdio.h>

void main() {
  float salario_bruto, ir, inss, sindicato, descontos_totais, salario_liquido;

  printf("Informe o salário bruto mensal: ");
  scanf("%f", &salario_bruto);

  ir = salario_bruto * 0.15;
  inss = salario_bruto * 0.11;
  sindicato = salario_bruto * 0.03;

  descontos_totais = ir + inss + sindicato;
  salario_liquido = salario_bruto - descontos_totais;

  printf("\nDesconto IR (15%%): R$%.2f", ir);
  printf("\nDesconto INSS (11%%): R$%.2f", inss);
  printf("\nDesconto Sindicato (3%%): R$%.2f", sindicato);
  printf("\nSalário líquido: R$%.2f\n", salario_liquido);

}
