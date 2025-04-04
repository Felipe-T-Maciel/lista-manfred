#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main() {
    char letras[10];
    char consoantes[10];
    int cont_consoantes = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite 1 letra: ");
        scanf(" %c", &letras[i]);
        letras[i] = tolower(letras[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (letras[i] >= 'a' && letras[i] <= 'z' && letras[i] != 'a' && letras[i] != 'e' && letras[i] != 'i' && letras[i] != 'o' && letras[i] != 'u') {
            consoantes[cont_consoantes] = letras[i];
            cont_consoantes++;
        }
    }

    printf("Quantidade de consoantes: %d\n", cont_consoantes);
    printf("Consoantes lidas: ");
    for (int i = 0; i < cont_consoantes; i++) {
        printf("%c ", consoantes[i]);
    }
    printf("\n");
}