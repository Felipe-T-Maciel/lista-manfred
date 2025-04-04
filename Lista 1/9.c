#include <stdio.h>

void main()
{
  int horasTrabalhadas;
  float salarioPorHora, salarioMensal;

  printf("Informe o número de horas trabalhadas no mês: ");
  scanf("%d", &horasTrabalhadas);
  printf("Informe o valor recebido por hora: ");
  scanf("%f", &salarioPorHora);

  salarioMensal = horasTrabalhadas * salarioPorHora;
  printf("Seu salário mensal é: R$ %.2f\n", salarioMensal);

}