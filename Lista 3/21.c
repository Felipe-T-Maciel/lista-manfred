#include <stdio.h>

void main() {
    int opcao, ingressos;
    float total1 = 0, total2 = 0, total3 = 0;
    int freq1 = 0, freq2 = 0, freq3 = 0;
    float preco1 = 10.0, preco2 = 12.0, preco3 = 15.0;

    while (1) {
        printf("Escolha um filme:\n");
        printf("1. Filme A - R$ %.2f\n", preco1);
        printf("2. Filme B - R$ %.2f\n", preco2);
        printf("3. Filme C - R$ %.2f\n", preco3);
        printf("4. Encerrar sessões\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            break;
        }

        printf("Quantos ingressos? ");
        scanf("%d", &ingressos);

        switch (opcao) {
        case 1:
            total1 += ingressos * preco1;
            freq1 += ingressos;
            break;
        case 2:
            total2 += ingressos * preco2;
            freq2 += ingressos;
            break;
        case 3:
            total3 += ingressos * preco3;
            freq3 += ingressos;
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    printf("Total arrecadado por sala:\n");
    printf("Filme A: R$ %.2f\n", total1);
    printf("Filme B: R$ %.2f\n", total2);
    printf("Filme C: R$ %.2f\n", total3);

    if (freq1 <= freq2 && freq1 <= freq3) {
        printf("Filme com menor frequência de público: Filme A\n");
    }
    else if (freq2 <= freq1 && freq2 <= freq3) {
        printf("Filme com menor frequência de público: Filme B\n");
    }
    else {
        printf("Filme com menor frequência de público: Filme C\n");
    }
}