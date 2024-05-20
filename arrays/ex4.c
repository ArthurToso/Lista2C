#include <stdio.h>

int main() {
    int vet[8];
    int x, y;
    
 
    printf("Digite 8 valores inteiros para o vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vet[i]);
    }
    
    printf("Digite valores entre 0 e 7 de X e Y: ");
    scanf("%d %d", &x, &y);
    
    if (x < 0 || x >= 8 || y < 0 || y >= 8) {
        printf("Posicoes invalidas.\n");
        return 1;
    }
    
    int soma = vet[x] + vet[y];
    
    printf("A soma dos valores nas posicoes %d e %d eh: %d\n", x, y, soma);
    
    return 0;
}