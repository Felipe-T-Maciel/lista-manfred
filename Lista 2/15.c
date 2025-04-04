#include <stdio.h>

void main(){
    float preco;
    int codigo;

    printf("preço: ");
    scanf("%f", &preco);
    printf("\ncodigo origem: ");
    printf("\n1 - Sul");
    printf("\n2 - Norte ");
    printf("\n3 - Leste ");
    printf("\n4 - Oeste ");
    printf("\n5 - Nordeste ");
    printf("\n6 - Nordeste ");
    printf("\n7 - Centro-oeste ");
    printf("\n8 - Centro-oeste ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 2:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 3:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 4:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 5:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 6:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 7:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
        case 8:
        printf("preço: %f", preco);
        printf("\n codigo: %d", codigo);
        break;
    default:
    printf("preço: %f", preco);
    printf("\n codigo: importado");
        break;
    }
}