#include <stdio.h>

float celsiusToFahrenheit(float celsius) {
    return (9 * celsius / 5) + 32;
}

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinToCelsius(float kelvin) {
    return kelvin - 273.15;
}

float celsiusToReaumur(float celsius) {
    return celsius * 4 / 5;
}

float reaumurToCelsius(float reaumur) {
    return reaumur * 5 / 4;
}

float kelvinToRankine(float kelvin) {
    return kelvin * 1.8;
}

float rankineToKelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int opcao;
    float temperatura;

    printf("Digite a temperatura: ");
    scanf("%f", &temperatura);

    printf("Escolha a opcao de conversao de temperatura:\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Fahrenheit para Celsius\n");
    printf("3. Celsius para Kelvin\n");
    printf("4. Kelvin para Celsius\n");
    printf("5. Celsius para Reaumur\n");
    printf("6. Reaumur para Celsius\n");
    printf("7. Kelvin para Rankine\n");
    printf("8. Rankine para Kelvin\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit", temperatura, celsiusToFahrenheit(temperatura));
            break;
        case 2:
            printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius", temperatura, fahrenheitToCelsius(temperatura));
            break;
        case 3:
            printf("%.2f graus Celsius equivalem a %.2f graus Kelvin", temperatura, celsiusToKelvin(temperatura));
            break;
        case 4:
            printf("%.2f graus Kelvin equivalem a %.2f graus Celsius", temperatura, kelvinToCelsius(temperatura));
            break;
        case 5:
            printf("%.2f graus Celsius equivalem a %.2f graus Reaumur", temperatura, celsiusToReaumur(temperatura));
            break;
        case 6:
            printf("%.2f graus Reaumur equivalem a %.2f graus Celsius", temperatura, reaumurToCelsius(temperatura));
            break;
        case 7:
            printf("%.2f graus Kelvin equivalem a %.2f graus Rankine", temperatura, kelvinToRankine(temperatura));
            break;
        case 8:
            printf("%.2f graus Rankine equivalem a %.2f graus Kelvin", temperatura, rankineToKelvin(temperatura));
            break;
        default:
            printf("Opcao invalida");
    }

    return 0;
}

