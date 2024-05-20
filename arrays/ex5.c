#include <stdio.h>

int main() {
    int vetor[10];
    int par = 0;
    
    printf("Digite 10 valores inteiros para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            par++;
        }
    }
    
    printf("O vetor possui %d valores pares.\n", par);
    
    return 0;
}