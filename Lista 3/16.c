#include <stdio.h>

void main() {
   int n, t1 = 0, t2 = 1, nextTerm;

   printf("Digite o número de termos: ");
   scanf("%d", &n);

   printf("Série de Fibonacci: ");

   for (int i = 1; i <= n; ++i) {
       printf("%d, ", t1);
       nextTerm = t1 + t2;
       t1 = t2;
       t2 = nextTerm;
   }
}