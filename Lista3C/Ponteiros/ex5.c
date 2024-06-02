#include <stdio.h>

void compara(int *ptrA, int *ptrB) {
    if (*ptrA < *ptrB) {
        int temp = *ptrA;
        *ptrA = *ptrB;
        *ptrB = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    compara(&valor1, &valor2);

    printf("Maior valor: %d\n", valor1);
    printf("Menor valor: %d\n", valor2);

    return 0;
}