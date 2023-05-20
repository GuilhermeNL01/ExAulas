#include <stdio.h>

int main() {
  int var1, var2;
  int *ptr1, *ptr2;

  printf("Digite o valor da variável var1: ");
  scanf("%d", &var1);

  printf("Digite o valor da variável var2: ");
  scanf("%d", &var2);

  ptr1 = &var1;
  ptr2 = &var2;

  printf("\nConteúdo da variável no endereço %p: %d\n",
         (ptr1 > ptr2) ? ptr1 : ptr2, *((ptr1 > ptr2) ? ptr1 : ptr2));

  return 0;
}
