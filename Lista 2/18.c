#include <stdio.h>

int main() {
  float a, b, c, delta, root1, root2;

  printf("Informe o valor de 'a' (coeficiente de x^2): ");
  scanf("%f", &a);

  if (a == 0) {
    printf("'a' precisa ser diferente de 0 para que seja uma equação quadrática.\n");
    return 1;
  }

  printf("Informe o valor de 'b' (coeficiente de x): ");
  scanf("%f", &b);

  printf("Informe o valor de 'c' (termo independente): ");
  scanf("%f", &c);

  delta = b * b - 4 * a * c;

  printf("O valor de Delta é: %.2f\n", delta);

  if (delta < 0) {
    printf("Delta é negativo. Não existem raízes reais para a equação.\n");
  } else if (delta == 0) {
    root1 = -b / (2 * a);
    printf("Delta é zero. Existe uma única raiz real: x = %.2f\n", root1);
  } else {
    root1 = (-b + sqrt(delta)) / (2 * a);
    root2 = (-b - sqrt(delta)) / (2 * a);
    printf("Delta é positivo. Existem duas raízes reais:\n");
    printf("x1 = %.2f\n", root1);
    printf("x2 = %.2f\n", root2);
  }

  return 0;
}
