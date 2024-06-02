#include <stdio.h>

int dobro(int *ptrA, int *ptrB) {
    *ptrA *= 2;
    *ptrB *= 2;
    return (*ptrA + *ptrB);
}

int main() {
    int valorA, valorB;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valorA);
    printf("Digite o segundo valor: ");
    scanf("%d", &valorB);

    int soma = dobro(&valorA, &valorB);

    printf("A soma do dobro dos numeros lidos eh: %d\n", soma);
    printf("Valor de A depois do dobro: %d\n", valorA);
    printf("Valor de B depois do dobro: %d\n", valorB);

    return 0;
}