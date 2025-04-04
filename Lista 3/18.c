#include <stdio.h>
#include <math.h>

int main() {
  int numero, divisor, eh_primo = 1;

  printf("Informe um número: ");
  scanf("%d", &numero);

  if (numero <= 1) {
    eh_primo = 0;
  } else {
    for (divisor = 2; divisor <= sqrt(numero); divisor++) {
      if (numero % divisor == 0) {
        eh_primo = 0;
        break;
      }
    }
  }

  if (eh_primo) {
    printf("%d é primo\n", numero);
  } else {
    printf("%d não é primo\n", numero);
  }

  return 0;
}