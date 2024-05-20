#include <stdio.h>

int main() {
    int vet[10];
    int maior, menor;
    
    printf("Digite 10 valores inteiros para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vet[i]);
    }

    maior = menor = vet[0];
    
    for (int i = 1; i < 10; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    printf("O maior valor do vetor eh: %d\n", maior);
    printf("O menor valor do vetor eh: %d\n", menor);
    
    return 0;
}