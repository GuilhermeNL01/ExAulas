#include <stdio.h>
#include <math.h>

#define N 10

int main() {
    int i;
    double vetor[N], soma = 0.0, media, desvio = 0.0;

    // lendo os valores do vetor
    for (i = 0; i < N; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%lf", &vetor[i]);
        soma += vetor[i];
    }

    // calculando a media
    media = soma / N;

    // calculando o desvio
    for (i = 0; i < N; i++) {
        desvio += pow(vetor[i] - media, 2);
    }
    desvio = sqrt(desvio / N);

    // exibindo o resultado
    printf("Desvio padrao: %.2lf\n", desvio);

    return 0;
}
