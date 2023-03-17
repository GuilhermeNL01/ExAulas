#include <stdio.h>

int main() {
  float salarioatual, percentualreajuste, novosalario;

  printf("Digite o salario atual do funcionario: ");
  scanf("%f", &salarioatual);
  printf("------------------------------------------\n");

  printf("Digite o percentual de reajuste: ");
  scanf("%f", &percentualreajuste);
  printf("------------------------------------------\n");
  system("pause");
  system("cls");
  novosalario = salarioatual * (1 + percentualreajuste/100);

  printf("O novo salario do funcionario: R$%.2f.\n", novosalario);

  return 0;
}
