#include <stdio.h>

int main() {
   int continuar = 1;
   float total = 0.0;

   while (continuar) {
      printf("\nFrutas disponiveis:\n");
      printf("1. Abacaxi (R$ 5.00)\n");
      printf("2. Maca (R$ 1.00)\n");
      printf("3. Pera (R$ 4.00)\n");
      printf("4. Sair\n");

      int opcao, quantidade;
      float preco;

      printf("\nEscolha uma opcao: ");
      scanf("%d", &opcao);

      switch (opcao) {
         case 1:
            preco = 5.0;
            printf("Abacaxi selecionado. Preco: R$ %.2f\n", preco);
            break;
         case 2:
            preco = 1.0;
            printf("Maca selecionada. Preco: R$ %.2f\n", preco);
            break;
         case 3:
            preco = 4.0;
            printf("Pera selecionada. Preco: R$ %.2f\n", preco);
            break;
         case 4:
            continuar = 0;
            break;
         default:
            printf("Opcao invalida. Tente novamente.\n");
            continue;
      }

      if (continuar) {
         printf("Digite a quantidade desejada: ");
         scanf("%d", &quantidade);

         total += preco * quantidade;
         printf("Adicionado ao carrinho. Total atual: R$ %.2f\n", total);
      }
   }

   printf("\nTotal da compra: R$ %.2f\n", total);

   return 0;
}
