#include <stdio.h>
#define PI 3.14

void main() {
  char escolha;
  float base, altura, lado, raio, ladoMaior, ladoMenor, area;

  do {
    printf("\nSelecione uma das opções abaixo:\n");
    printf("a. Área do Retângulo = base * altura\n");
    printf("b. Área do Triângulo = base * altura / 2\n");
    printf("c. Área do Círculo = PI * raio^2\n");
    printf("d. Área do Quadrado = lado^2\n");
    printf("e. Área do Trapézio = (ladoMaior + ladoMenor) * altura / 2\n");
    printf("f. Encerrar\n");
    printf("Escolha: ");
    scanf(" %c", &escolha);

    switch (escolha) {
      case 'a':
        printf("Informe a base: ");
        scanf("%f", &base);
        printf("Informe a altura: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("Área do Retângulo: %.2f\n", area);
        break;

      case 'b':
        printf("Informe a base: ");
        scanf("%f", &base);
        printf("Informe a altura: ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("Área do Triângulo: %.2f\n", area);
        break;

      case 'c':
        printf("Informe o raio: ");
        scanf("%f", &raio);
        area = PI * raio * raio;
        printf("Área do Círculo: %.2f\n", area);
        break;

      case 'd':
        printf("Informe o lado: ");
        scanf("%f", &lado);
        area = lado * lado;
        printf("Área do Quadrado: %.2f\n", area);
        break;

      case 'e':
        printf("Informe o lado maior: ");
        scanf("%f", &ladoMaior);
        printf("Informe o lado menor: ");
        scanf("%f", &ladoMenor);
        printf("Informe a altura: ");
        scanf("%f", &altura);
        area = (ladoMaior + ladoMenor) * altura / 2;
        printf("Área do Trapézio: %.2f\n", area);
        break;

      case 'f':
        printf("Finalizando o programa...\n");
        break;

      default:
        printf("Opção inválida! Por favor, tente novamente.\n");
        break;
    }
  } while (escolha != 'f');
}