#include <stdio.h>

#define SIZE 10
#define RESULT_SIZE 30

void main() {
  int vetor1[SIZE], vetor2[SIZE], vetor3[SIZE], resultado[RESULT_SIZE];
  int i, j = 0;

  printf("Digite os elementos do vetor 1:\n");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vetor1[i]);
  }

  printf("Digite os elementos do vetor 2:\n");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vetor2[i]);
  }

  printf("Digite os elementos do vetor 3:\n");
  for (i = 0; i < SIZE; i++) {
    scanf("%d", &vetor3[i]);
  }

  for (i = 0; i < SIZE; i++) {
    resultado[j++] = vetor1[i];
    resultado[j++] = vetor2[i];
    resultado[j++] = vetor3[i];
  }

  printf("Vetor resultante:\n");
  for (i = 0; i < RESULT_SIZE; i++) {
    printf("%d ", resultado[i]);
  }
  printf("\n");

}
