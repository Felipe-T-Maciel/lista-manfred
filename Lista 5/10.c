#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void to_uppercase(char *str) {
   for (int i = 0; str[i] != '\0'; i++) {
       str[i] = toupper(str[i]);
   }
}

int main() {
   char str[100];
   printf("Digite uma string: ");
   fgets(str, sizeof(str), stdin);

   to_uppercase(str);
   printf("String em maiúsculas: %s", str);
}