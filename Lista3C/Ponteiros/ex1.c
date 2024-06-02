#include <stdio.h>

int main() {

    int inteiro = 10;
    float real = 2.5;
    char letra = 'A';

    int *ponteiro_inteiro = &inteiro;
    float *ponteiro_real = &real;
    char *ponteiro_char = &letra;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", letra);

    *ponteiro_inteiro = 20;
    *ponteiro_real = 6.28;
    *ponteiro_char = 'B';

    printf("\nValores depois da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", letra);

    return 0;
}