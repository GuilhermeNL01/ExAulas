#include <stdio.h>

int main() {
    int var1, var2;
    int *ptr1, *ptr2;

    ptr1 = &var1;
    ptr2 = &var2;

    printf("Endereço da variável var1: %p\n", ptr1);
    printf("Endereço da variável var2: %p\n", ptr2);

    if (ptr1 > ptr2) {
        printf("O endereço de var1 é maior.\n");
    } else if (ptr2 > ptr1) {
        printf("O endereço de var2 é maior.\n");
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
