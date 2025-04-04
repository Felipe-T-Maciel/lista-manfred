#include <stdio.h>
#include <math.h>

void main()
{
  float largura, altura, area, litros_necessarios, latas_necessarias;
  const float capacidade_lata = 3.6;

  printf("Informe a largura da parede (em metros): ");
  scanf("%f", &largura);
  printf("Informe a altura da parede (em metros): ");
  scanf("%f", &altura);

  area = largura * altura;
  litros_necessarios = area * 3; // Consumo de tinta: 3 litros por metro quadrado
  latas_necessarias = ceil(litros_necessarios / capacidade_lata);

  printf("Você precisará de %.0f latas de tinta para pintar a parede.\n", latas_necessarias);

}