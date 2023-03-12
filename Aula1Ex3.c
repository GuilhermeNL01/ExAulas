#include <stdio.h>
#include <math.h>

int main() {
    float largura, altura, area, tinta, latas;
    
    printf("Informe a largura da parede em metros: ");
    scanf("%f", &largura);
    
    printf("Informe a altura da parede em metros: ");
    scanf("%f", &altura);
    
    area = largura * altura;
    tinta = area * 0.3;
    latas = ceil(tinta / 2);
    
    if (latas == 1) {
        printf("Voce precisa de 1 lata de tinta para pintar uma parede de %.2f m x %.2f m.\n", largura, altura);
    } else {
        printf("Voce precisa de %.0f latas de tinta para pintar uma parede de %.2f m x %.2f m.\n", latas, largura, altura);
    }
    
    return 0;
}
