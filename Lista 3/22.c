#include <stdio.h>
#include <ctype.h>

int main() {
  int idade, soma = 0, contador = 0;
  char opcao;

  do {
    printf("Digite uma idade: ");
    scanf("%d", &idade);
    soma += idade;
    contador++;

    printf("Deseja adicionar outra idade? (s/n): ");
    scanf(" %c", &opcao);
  } while (tolower(opcao) == 's');

  int media = soma / contador;

  if (media >= 0 && media <= 25) {
    printf("Jovem\n");
  } else if (media >= 26 && media <= 60) {
    printf("Adulta\n");
  } else {
    printf("Idosa\n");
  }

  return 0;
}