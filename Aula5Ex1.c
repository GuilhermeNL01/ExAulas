//
//  Aula5Ex1.c
//  C teste
//
//  Created by Guilherme Nunes Lobo on 06/04/23.
//

#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main(void) {
    int x = 10;
    int y = 2;
    int z = max(x, y);
    printf("O maior número entre %d e %d é %d", x, y, z);
    return 0;
}

