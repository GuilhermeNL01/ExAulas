#include <stdio.h>

int main() {
   int i, count = 0;

   printf("Os cinco primeiros multiplos de 3 sao:\n");

   for (i = 1; count < 5; i++) {
      if (i % 3 == 0) {
         printf("%d\n", i);
         count++;
      }
   }

   return 0;
}
