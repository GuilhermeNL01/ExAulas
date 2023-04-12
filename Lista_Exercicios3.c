#include <stdio.h>

#define PI 3.14159

int main(void) {
    float raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4.0/3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    printf("A area da superficie da esfera e: %.2f\n", area);
    printf("O volume da esfera e: %.2f\n", volume);

    return 0;
}
