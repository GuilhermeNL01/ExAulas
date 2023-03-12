#include <stdio.h>
#include <math.h>

int main() {
    const double LITROSLATA = 2.0;
    const double COBERTURALITRO = 0.3;
    double raio, area, largura, altura, areaparede, litrosnecessarios, latasnecessarias;

    printf("Raio do circulo: ");
    scanf("%lf", &raio);
    area = M_PI * raio * raio; // M_PI-valor de π no math.h
    printf("Area do circulo : %.2lf\n", area);

    printf("Largura da parede: ");
    scanf("%lf", &largura);
    printf("Altura da parede: ");
    scanf("%lf", &altura);

    areaparede = largura * altura;
    litrosnecessarios = areaparede * COBERTURALITRO;
    latasnecessarias = ceil(litrosnecessarios / LITROSLATA); // arredondar para cima

    printf("Area da parede: %.2lf\n", areaparede);
    printf("Litros de tinta necessarios: %.2lf\n", litrosnecessarios);
    printf("Latas de tinta necessarias: %.0lf\n", latasnecessarias);

    return 0;
}
