#include <stdio.h>

void main() {
  float nota, total = 0;
  for (int i = 1; i <= 4; i++) {
    printf("Informe a nota %d: ", i);
    scanf("%f", &nota);
    total += nota;
  }
  printf("A média das notas é: %.1f\n", total / 4);

}
