#include <stdio.h>
#include <iostream>

static void att3() {
    int numbers[10] = {0};
    int max_num, min_num;

    printf("Digite 10 números inteiros:\n");

    for (int i = 0; i < 10; ++i) {
        scanf_s("%d", &numbers[i]);
    }

    max_num = numbers[0];
    min_num = numbers[0];

    for (int i = 1; i < 10; ++i) {
        if (numbers[i] > max_num) {
            max_num = numbers[i];
        }
        if (numbers[i] < min_num) {
            min_num = numbers[i];
        }
    }

    int difference = max_num - min_num;

    printf("A diferença entre o maior e o menor número é: %d\n", difference);
}