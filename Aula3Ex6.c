#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 5 == 0) {
        printf("%d e divisivel por 5\n", num);
    }
    if(num % 3 == 0) {
        printf("%d e divisivel por 3\n", num);
    }
    if(num % 2 == 0) {
        printf("%d e divisivel por 2\n", num);
    }
    if(num % 5 != 0 && num % 3 != 0 && num % 2 != 0) {
        printf("%d nao e divisivel por 2, 3 ou 5\n", num);
    }

    return 0;
}
