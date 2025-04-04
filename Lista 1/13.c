#include <stdio.h>
#include <math.h>

void main()
{
  int first_int, second_int;
  float real_num;

  printf("Informe um número inteiro: ");
  scanf("%d", &first_int);

  printf("Informe outro número inteiro: ");
  scanf("%d", &second_int);

  printf("Informe um número real: ");
  scanf("%f", &real_num);

  printf("Resultado da soma do dobro do primeiro com a metade do segundo: %d", (first_int * 2) + (second_int / 2));
  printf("\nResultado da soma do triplo do primeiro com o número real: %.2f", (first_int * 3) + real_num);
  printf("\nO número real elevado ao cubo: %.2f", pow(real_num, 3));

}