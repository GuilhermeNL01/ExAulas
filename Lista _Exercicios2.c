/*
 Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no
 plano, p1(x1, y1) e p2(x2, y2) e calcule a distância entre eles, mostrando 4 casas decimais
 após a vírgula, segundo a fórmula:√(x2 - 1x)² + (y2 - y1)²
 */

#include <stdio.h>
#include <math.h>

int main(void){
    
    float x1, y1, x2, y2;
    float distancia;
    
    printf("Digite as coordenadas x e y do ponto 1: ");
    scanf("%f %f", &x1, &y1);
    
    printf("Digite as coordenadas x e y do ponto 2: ");
    scanf("%f %f", &x2, &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distancia entre os pontos (%.4f, %.4f) e (%.4f, %.4f): %.4f\n", x1, y1, x2, y2, distancia);
    
    return 0;
}
