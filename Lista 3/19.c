#include <stdio.h>
#include <math.h>

int is_prime(int number, int* division_count) {
  if (number <= 1) return 0;
  for (int i = 2; i <= sqrt(number); i++) {
    (*division_count)++;
    if (number % i == 0) return 0;
  }
  return 1;
}

int main() {
  int number, current_div_count = 0, total_divisions = 0;
  printf("Enter a number: ");
  scanf("%d", &number);

  printf("Prime numbers between 1 and %d:\n", number);
  for (int i = 2; i <= number; i++) {
    if (is_prime(i, &current_div_count)) {
      printf("%d ", i);
    }
    total_divisions += current_div_count;
    current_div_count = 0;
  }
  printf("\nTotal divisions performed: %d\n", total_divisions);
  return 0;
}