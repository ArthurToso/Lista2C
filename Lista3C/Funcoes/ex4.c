#include <stdio.h>
#include <math.h>


int quadradoPerfeito(int num) {

    float raiz = sqrt(num);

    if (raiz == (int)raiz) {
        printf("Quadrado perfeito");
        return 1;
    } else {
        printf("Nao eh quadrado perfeito");
        return 0;
    }
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (quadradoPerfeito(num)) {
        printf("%d eh um quadrado perfeito.\n", num);
    } else {
        printf("%d nao eh um quadrado perfeito.\n", num);
    }

    return 0;
}