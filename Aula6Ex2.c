#include <stdio.h>

void imprimirTabelaASCII() {
    printf("+-------+--------+---------+\n");
    printf("| Decimal|  Hex   | Caracter|\n");
    printf("+-------+--------+---------+\n");

    for (int i = 0; i < 128; i++) {
        printf("|%7d|%7x| %c      |\n", i, i, i);
        printf("+-------+--------+---------+\n");
    }
}

int main() {
    imprimirTabelaASCII();
    return 0;
}

