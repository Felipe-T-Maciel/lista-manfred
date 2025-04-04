#include <stdio.h>
#include <stdbool.h>

#define SIZE_A 5
#define SIZE_B 10

bool isInArray(int element, int array[], int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return true;
    }
  }
  return false;
}

void main() {
  int A[SIZE_A], B[SIZE_B], C[SIZE_A + SIZE_B], D[SIZE_A];
  int sizeC = 0, sizeD = 0;

  printf("Digite os elementos do vetor A[%d]:\n", SIZE_A);
  for (int i = 0; i < SIZE_A; i++) {
    scanf("%d", &A[i]);
  }

  printf("Digite os elementos do vetor B[%d]:\n", SIZE_B);
  for (int i = 0; i < SIZE_B; i++) {
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < SIZE_A; i++) {
    C[sizeC++] = A[i];
  }
  for (int i = 0; i < SIZE_B; i++) {
    C[sizeC++] = B[i];
  }

  for (int i = 0; i < SIZE_A; i++) {
    if (!isInArray(A[i], B, SIZE_B)) {
      D[sizeD++] = A[i];
    }
  }

  printf("\nVetor C (união de A e B):\n");
  for (int i = 0; i < sizeC; i++) {
    printf("%d ", C[i]);
  }
  printf("\n");

  printf("\nVetor D (elementos de A que não estão em B):\n");
  for (int i = 0; i < sizeD; i++) {
    printf("%d ", D[i]);
  }
  printf("\n");

}