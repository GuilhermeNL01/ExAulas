#include <stdio.h>
#include <math.h>

int main() {
   double a, b, c, delta, x1, x2;
   printf("Digite o valor de a: ");
   scanf("%lf", &a);
   printf("-------------------------------\n");

   printf("Digite o valor de b: ");
   scanf("%lf", &b);
   printf("-------------------------------\n");

   printf("Digite o valor de c: ");
   scanf("%lf", &c);
   printf("-------------------------------\n");
   system("pause");
   system("cls");

   delta = b*b - 4*a*c;

   if(delta < 0) {
      printf("Nao existem raizes reais\n");
   } else if(delta == 0) {
      x1 = -b/(2*a);
      printf("A equacao possui apenas uma raiz real: x = %.2lf\n", x1);
   } else {
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
      printf("Raizes da equaçao: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
   }

   return 0;
}
