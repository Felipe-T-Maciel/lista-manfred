#include <stdio.h>
#include <string.h>

#define NUM_ALUNOS 15
#define TAM_NOME 50

void main() {
  char nomes[NUM_ALUNOS][TAM_NOME];
  float notas[NUM_ALUNOS], soma = 0, media;
  int i;

  for (i = 0; i < NUM_ALUNOS; i++) {
    scanf("%s %f", nomes[i], &notas[i]);
    soma += notas[i];
  }

  media = soma / NUM_ALUNOS;

  for (i = 0; i < NUM_ALUNOS; i++) {
    if (notas[i] >= media) {
      printf("%s\n", nomes[i]);
    }
  }

}