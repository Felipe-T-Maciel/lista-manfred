#include <stdio.h>

int fatorial(int n) {
    if (n == 0) return 1;
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

void main() {
    int num;
    char opcao;
    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Erro, digite um numero inteiro acima de zero\n");
        } else {
            printf("Fatorial de %d = %d\n", num, fatorial(num));
        }
        printf("Deseja calcular outro fatorial? (s/n): ");
        scanf(" %c", &opcao, 1);
    } while (tolower(opcao) == 's');
}