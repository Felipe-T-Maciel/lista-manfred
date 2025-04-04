#include <stdio.h>

void main() {
    int num;
    char opcao;

    do {
        printf("Digite um numero: ");
        scanf("%d", &num);
        for (int i = 10; i > 0 ; i--){
            printf("%d x %d = %d\n", num, i, num * i);
        }
        printf("Deseja continuar calculando? (s=sim, n=nao): ");
        scanf(" %c", &opcao, 1);
    } while (opcao == 's');
}