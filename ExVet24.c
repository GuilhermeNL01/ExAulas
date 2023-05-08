#include <stdio.h>

int main() {
    int num_aluno[10];
    float altura[10], maior_altura, menor_altura;
    int i, indice_maior_altura, indice_menor_altura;
    
    // Leitura dos dados de altura e número de aluno
    for(i = 0; i < 10; i++) {
        printf("Digite o numero do aluno %d: ", i+1);
        scanf("%d", &num_aluno[i]);
        printf("Digite a altura do aluno %d: ", num_aluno[i]);
        scanf("%f", &altura[i]);
    }
    
    // Inicialização das variáveis para encontrar o mais alto e o mais baixo
    maior_altura = altura[0];
    menor_altura = altura[0];
    indice_maior_altura = 0;
    indice_menor_altura = 0;
    
    // Busca pelo mais alto e pelo mais baixo
    for(i = 1; i < 10; i++) {
        if(altura[i] > maior_altura) {
            maior_altura = altura[i];
            indice_maior_altura = i;
        }
        if(altura[i] < menor_altura) {
            menor_altura = altura[i];
            indice_menor_altura = i;
        }
    }
    
    // Exibição dos resultados
    printf("\nAluno mais alto:\n");
    printf("Numero: %d\n", num_aluno[indice_maior_altura]);
    printf("Altura: %.2f\n\n", maior_altura);
    printf("Aluno mais baixo:\n");
    printf("Numero: %d\n", num_aluno[indice_menor_altura]);
    printf("Altura: %.2f\n", menor_altura);
    
    return 0;
}
