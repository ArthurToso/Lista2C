#include <stdio.h>

int main() {
    int vet[10];
    int maior, pos;
    
    printf("Digite 10 valores inteiros para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }
    
    maior = vet[0];
    pos = 0;
    
    for (int i = 1; i < 10; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
            pos = i;
        }
    }
    
    printf("valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    printf("O maior elemento do vetor eh: %d e se encontra na posicao %d\n", maior, pos);

    return 0;
}