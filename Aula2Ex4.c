#include<stdio.h>

int main(){

double base, altura, area;
printf("Digite a base do triangulo:\n");
scanf("%lf",&base);
printf("----------------------------------\n");

printf("Digite a altura do triangulo:\n");
scanf("%lf",&altura);
printf("----------------------------------\n");
system("pause");
system("cls");
area = base * altura;
printf("Area do triangulo: %2.lf\n", area);





return 0;
}