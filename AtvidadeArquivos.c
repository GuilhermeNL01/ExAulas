#include <stdio.h>

int main() {
    float matematica, fisica, quimica;
    FILE *arquivo;
    
    // Solicita as notas do aluno
    printf("Digite a nota de Matemática: ");
    scanf("%f", &matematica);
    
    printf("Digite a nota de Física: ");
    scanf("%f", &fisica);
    
    printf("Digite a nota de Química: ");
    scanf("%f", &quimica);
    
    // Calcula a média
    float media = (matematica + fisica + quimica) / 3.0;
    
    // Abre o arquivo para escrita
    arquivo = fopen("notas.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    
    // Escreve as notas e a média no arquivo
    fprintf(arquivo, "Matemática: %.2f\n", matematica);
    fprintf(arquivo, "Física: %.2f\n", fisica);
    fprintf(arquivo, "Química: %.2f\n", quimica);
    fprintf(arquivo, "Média: %.2f\n", media);
    
    // Fecha o arquivo
    fclose(arquivo);
    
    printf("Notas salvas com sucesso no arquivo notas.txt.\n");
    
    return 0;
}
