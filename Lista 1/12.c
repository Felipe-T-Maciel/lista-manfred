#include <stdio.h>
#include <math.h>

void main()
{
  float celsius;
  printf("Informe a temperatura em graus Celsius: ");
  scanf("%f", &celsius);
  printf("A temperatura equivalente em Fahrenheit é: %.2f\n", (celsius * 9 / 5) + 32);

}