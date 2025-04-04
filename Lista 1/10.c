#include <stdio.h>

void main() {
  float daily_rate = 25.00, gross_salary;
  int days_worked;

  printf("Informe o número de dias trabalhados: ");
  scanf("%d", &days_worked);

  gross_salary = days_worked * daily_rate;
  printf("Valor líquido a ser pago: %.2f", gross_salary - (gross_salary * 0.08));

}