#include <iostream>
#include <stdio.h>

static void att1()
{
    int number1, number2;

    printf("Digite dois numeros inteiros: ");
    scanf_s("%d %d", &number1, &number2);

    printf("A intervalo entre %d e %d são:", number1, number2);

    for (int i = number1 + 1; i < number2; i++)
    {
        printf("%d ", i);
    }

}
