#include <stdio.h>
#include <stdlib.h>

int calcularHoraLocal(int horaAtual, int codigoLocalidade) {
int diferencaHoras[] = {0, 0, 3, 4, 5, 6, -3, -3, -2, -2, -1, 1};
return (horaAtual + diferencaHoras[codigoLocalidade - 1] + 24) % 24;
}

void main() {
int horaAtual, codigoLocalidade, horaLocal;

printf("Digite a hora atual (0-23): ");
scanf("%d", &horaAtual);

printf("Digite o código da localidade (1-12): ");
scanf("%d", &codigoLocalidade);

if (horaAtual < 0 || horaAtual > 23 || codigoLocalidade < 1 || codigoLocalidade > 12) {
    printf("Entrada inválida.\n");
    return;
}

horaLocal = calcularHoraLocal(horaAtual, codigoLocalidade);
printf("A hora na localidade escolhida é: %d\n", horaLocal);
}