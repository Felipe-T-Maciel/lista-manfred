#include <stdio.h>

void main() {  
    int kmh, capacidade, consumo;  
    char opcao;  

    do {  
        printf("Quantos km: ");  
        scanf("%d", &kmh);  
        printf("Capacidade do tanque (em litros): ");  
        scanf("%d", &capacidade);  
        printf("Consumo médio (km/l): ");  
        scanf("%d", &consumo);  

        int litros_consumidos = kmh / consumo;  
        int reabastecimentos = litros_consumidos / capacidade;  
        int litros_restantes = capacidade - (litros_consumidos % capacidade);  

        printf("\nReabasteceu: %d vezes", reabastecimentos);  
        printf("\nNúmero de litros consumidos: %d litros", litros_consumidos);  
        printf("\nLitros restantes no tanque: %d litros\n", litros_restantes);  

        printf("\nDeseja realizar outro cálculo? (s/n): ");  
        scanf(" %c", &opcao);  
    } while (opcao == 's' || opcao == 'S');  
}