#include <stdio.h>

int main() {
    int opcao1, opcao2, opcao3, opcao4;

    printf("Categoria:\n");
    printf("1 - Mamíferos\n");
    printf("2 - Aves\n");
    printf("3 - Répteis\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao1);

    if (opcao1 == 1) {
        printf("Subcategoria:\n");
        printf("1 - Quadrúpede\n");
        printf("2 - Bípede\n");
        printf("3 - Voadores\n");
        printf("4 - Aquáticos\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao2);

        if (opcao2 == 1) {
            printf("Característica:\n");
            printf("1 - Carnívoro\n");
            printf("2 - Herbívoro\n");
            printf("Digite sua escolha: ");
            scanf("%d", &opcao3);

            if (opcao3 == 1) {
                printf("animal = LEÃO.\n");
            }
            else if (opcao3 == 2) {
                printf("animal = CAVALO.\n");
            }
            else {
                printf("Opção inválida.\n");
            }
        }
        else if (opcao2 == 2) {
            printf("Característica:\n");
            printf("1 - Onívoro\n");
            printf("2 - Frutífero\n");
            printf("Digite sua escolha: ");
            scanf("%d", &opcao3);

            if (opcao3 == 1) {
                printf("animal = HOMEM.\n");
            }
            else if (opcao3 == 2) {
                printf("animal = MACACO.\n");
            }
            else {
                printf("Opção inválida.\n");
            }
        }
        else if (opcao2 == 3) {
            printf("animal = MORCEGO.\n");
        }
        else if (opcao2 == 4) {
            printf("animal = BALEIA.\n");
        }
        else {
            printf("Opção inválida.\n");
        }
    }
    else if (opcao1 == 2) {
        printf("Subcategoria:\n");
        printf("1 - Não voadoras\n");
        printf("2 - Nadadoras\n");
        printf("3 - De rapina\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao2);

        if (opcao2 == 1) {
            printf("Característica:\n");
            printf("1 - Tropical\n");
            printf("2 - Polar\n");
            printf("Digite sua escolha: ");
            scanf("%d", &opcao3);

            if (opcao3 == 1) {
                printf("animal = AVESTRUZ.\n");
            }
            else if (opcao3 == 2) {
                printf("animal = PINGUIM.\n");
            }
            else {
                printf("Opção inválida.\n");
            }
        }
        else if (opcao2 == 2) {
            printf("animal = PATO.\n");
        }
        else if (opcao2 == 3) {
            printf("animal = ÁGUIA.\n");
        }
        else {
            printf("Opção inválida.\n");
        }
    }
    else if (opcao1 == 3) {
        printf("Característica:\n");
        printf("1 - Com casco\n");
        printf("2 - Carnívoros\n");
        printf("3 - Sem patas\n");
        printf("Digite sua escolha: ");
        scanf("%d", &opcao2);

        if (opcao2 == 1) {
            printf("animal = TARTARUGA.\n");
        }
        else if (opcao2 == 2) {
            printf("animal = CROCODILO.\n");
        }
        else if (opcao2 == 3) {
            printf("animal = COBRA.\n");
        }
        else {
            printf("Opção inválida.\n");
        }
    }
    else {
        printf("Opção inválida.\n");
    }
}