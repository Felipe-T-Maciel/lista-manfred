#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
  char input[20];
  int decimal_places = 0;
  char* decimal_point;

  do {
    printf("Digite um número com exatamente 5 casas decimais: ");
    scanf("%s", input);
    decimal_point = strchr(input, '.');
    decimal_places = (decimal_point != NULL) ? strlen(decimal_point + 1) : 0;
  } while (decimal_places != 5);

  double number = atof(input);
  printf("Número arredondado: %.2f\n", round(number * 100) / 100);
}