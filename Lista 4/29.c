#include <stdio.h>
#include <string.h>

#define NUM_QUESTOES 12
#define MAX_ALUNOS 100
#define TAM_NOME 50

void main() {
  int gabarito[NUM_QUESTOES];
  char nomes[MAX_ALUNOS][TAM_NOME];
  int respostas[MAX_ALUNOS][NUM_QUESTOES];
  int num_alunos, acertos[MAX_ALUNOS];

  for (int i = 0; i < NUM_QUESTOES; i++) {
    scanf("%d", &gabarito[i]);
  }

  scanf("%d", &num_alunos);

  for (int i = 0; i < num_alunos; i++) {
    scanf("%s", nomes[i]);
    for (int j = 0; j < NUM_QUESTOES; j++) {
      scanf("%d", &respostas[i][j]);
    }
  }

  for (int i = 0; i < num_alunos; i++) {
    acertos[i] = 0;
    for (int j = 0; j < NUM_QUESTOES; j++) {
      if (respostas[i][j] == gabarito[j]) {
        acertos[i]++;
      }
    }
  }

  for (int i = 0; i < num_alunos; i++) {
    printf("%s %d\n", nomes[i], acertos[i]);
  }

}