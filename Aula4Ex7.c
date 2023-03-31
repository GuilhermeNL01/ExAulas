#include <stdio.h>

int main() {
   int n, i, t1 = 0, t2 = 1, proximoTermo;

   printf("Digite um numero inteiro maior ou igual a zero: ");
   scanf("%d", &n);

 
   if (n == 0) {
      printf("0");
   } else if (n == 1) {
      printf("1");
   } else {
      for (i = 2; i <= n; i++) {
         proximoTermo = t1 + t2;
         t1 = t2;
         t2 = proximoTermo;
      }

      printf("%d", proximoTermo);
   }

   return 0;
}
