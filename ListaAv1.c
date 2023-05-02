#include <stdio.h>

int main(void) {
   int n, i, melhor_volta;
   float tempo, menor_tempo = 0, tempo_medio = 0;
   
   printf("Digite o número de voltas: ");
   if (scanf("%d", &n) != 1 || n <= 0) {
      printf("Número inválido de voltas.\n");
      return 1;
   }
   
   printf("\nDigite o tempo de cada volta:\n");
   
   if (scanf("%f", &tempo) != 1) {
      printf("Tempo inválido para a primeira volta.\n");
      return 1;
   }
   melhor_volta = 1;
   menor_tempo = tempo;
   tempo_medio += tempo;
   
   for (i = 2; i <= n; i++) {
      if (scanf("%f", &tempo) != 1) {
         printf("Tempo inválido para a volta %d.\n", i);
         return 1;
      }
      tempo_medio += tempo;
      
      if (tempo < menor_tempo || i == 2) {
         menor_tempo = tempo;
         melhor_volta = i;
      }
   }
   
   tempo_medio /= n;
   
   printf("\nMelhor tempo: %.2f segundos (volta %d)\n", menor_tempo, melhor_volta);
   printf("Tempo médio: %.2f segundos\n", tempo_medio);
   
   return 0;
}
    
    
    
    
    
    
    
    
    
    

