#include <stdio.h>
#include <math.h>

void main()
{
  float fahrenheit, celsius;
  printf("Informe a temperatura em Fahrenheit: ");
  scanf_s("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("A temperatura em Celsius é: %.2f\n", celsius);

}