#include <stdio.h>
#include <corecrt_malloc.h>

void gerarVetorB(int A[], int B[], int n) {
    for (int i = 0; i < n; i++) {
        B[i] = A[i] - A[n - i - 1];
    }
}

void main() {
    int n;

    printf("tamanho do vetor: ");
    scanf("%d", &n);

    int* A = (int*)malloc(n * sizeof(int));
    int* B = (int*)malloc(n * sizeof(int));


    printf("elementos do vetor A:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    gerarVetorB(A, B, n);

    printf("vetor B:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");
}