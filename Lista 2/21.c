#include <stdio.h>

int main() {
  int pulmao_infectado, febre, nariz_escorrendo, espirros;
  int total_sintomas = 0;

  printf("Sistema de Diagnóstico Médico\n");
  printf("Responda com 0 (não) ou 1 (sim) para os sintomas abaixo:\n");

  printf("1. Infecção pulmonar: ");
  scanf("%d", &pulmao_infectado);

  printf("2. Febre ou temperatura elevada: ");
  scanf("%d", &febre);

  printf("3. Nariz escorrendo: ");
  scanf("%d", &nariz_escorrendo);

  printf("4. Espirros: ");
  scanf("%d", &espirros);

  if (nariz_escorrendo) total_sintomas++;
  if (espirros) total_sintomas++;
  if (pulmao_infectado) total_sintomas++;
  if (febre) total_sintomas++;

  if (pulmao_infectado && febre) {
    printf("Diagnóstico: Pneumonia\n");
  } else if (total_sintomas == 1) {
    printf("Diagnóstico: Resfriado\n");
  } else if (total_sintomas >= 2) {
    printf("Diagnóstico: Gripe\n");
  } else {
    printf("Nenhum problema de saúde identificado.\n");
  }

  return 0;
}
