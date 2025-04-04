#include <stdio.h>  
#include <stdlib.h>  

void main() {
   float notas[4];
   float media = 0;

   for (int i = 0; i < 4; i++) {
       printf("Nota %d: ", i+1);
       scanf("%f", &notas[i]);
   }
   media = (notas[0] + notas[1] + notas[2] + notas[3]) / 4;
   
   for (int i = 0; i < 4; i++) {
       printf("Nota %d = %.2f\n", i+1, notas[i]);
   }
   
   printf("Média: %.2f\n", media);
}