#include <stdio.h>

void imprimirArray(int* arr, int tamanho) {
    int* ptr = arr;

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    printf("\n");
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(array) / sizeof(int);

    imprimirArray(array, tamanho);

    return 0;
}
