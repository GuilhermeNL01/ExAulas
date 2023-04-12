/*
 Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
 produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B - C * D).
 Apresente o resultado da seguinte forma:
*/
#include <stdio.h>

int main(void){
    
    int a,b,c,d,calc;
    
  
    
    printf("Valor de A:\n");
    scanf("%d",&a);
    printf("Valor de B:\n");
    scanf("%d",&b);
    printf("Valor de C:\n");
    scanf("%d",&c);
    printf("Valor de D:\n");
    scanf("%d",&d);
    
    calc = (a * b - c * d);
    
    printf("DIFERENCA = %d * %d - %d * %d\n",a,b,c,d);
    printf("DIFERENCA = %d\n",calc);
    
    return 0;
}
