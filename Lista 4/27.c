#include <stdio.h>

#define NUM_ARTIGOS 30

void main() {
  int codigos[NUM_ARTIGOS];
  float precos[NUM_ARTIGOS];
  int i, j, tempCodigo;
  float tempPreco;

  for (i = 0; i < NUM_ARTIGOS; i++) {
    scanf("%d %f", &codigos[i], &precos[i]);
  }

  for (i = 0; i < NUM_ARTIGOS - 1; i++) {
    for (j = i + 1; j < NUM_ARTIGOS; j++) {
      if (precos[i] < precos[j]) {
        tempPreco = precos[i];
        precos[i] = precos[j];
        precos[j] = tempPreco;

        tempCodigo = codigos[i];
        codigos[i] = codigos[j];
        codigos[j] = tempCodigo;
      }
    }
  }

  for (i = 0; i < 3; i++) {
    printf("Codigo: %d, Preco: %.2f\n", codigos[i], precos[i]);
  }

}