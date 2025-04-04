#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
  float lado;
  printf("Informe o comprimento de um lado do quadrado: ");
  scanf("%f", &lado);
  printf("O dobro da área do quadrado é: %f", pow(lado, 2) * 2);

}