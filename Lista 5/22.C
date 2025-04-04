#include <stdio.h>

void gerarFibonacci(int quantidade) {
  int primeiro = 0, segundo = 1, proximo;

  printf("Sequência de Fibonacci:\n");
  for (int i = 0; i < quantidade; i++) {
    if (i <= 1) {
      proximo = i;
    } else {
      proximo = primeiro + segundo;
      primeiro = segundo;
      segundo = proximo;
    }
    printf("%d ", proximo);
  }
  printf("\n");
}

int main() {
  int quantidade;

  printf("Digite a quantidade de números da sequência de Fibonacci que deseja: ");
  scanf("%d", &quantidade);

  if (quantidade <= 0) {
    printf("Por favor, insira um número inteiro positivo.\n");
  } else {
    gerarFibonacci(quantidade);
  }

  return 0;
}

void generateFibonacci(int n) {
  int first = 0, second = 1, next;

  printf("Fibonacci Sequence:\n");
  for (int i = 0; i < n; i++) {
    if (i <= 1) {
      next = i;
    } else {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%d ", next);
  }
  printf("\n");
}

int main() {
  int n;

  printf("Enter the number of Fibonacci numbers you want: ");
  scanf("%d", &n);

  if (n <= 0) {
    printf("Please enter a positive integer.\n");
  } else {
    generateFibonacci(n);
  }

  return 0;
}
