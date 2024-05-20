#include <stdio.h>

int main() {
    char nome[100];
    int aux = 0;

    printf("Digite um nome: ");
    scanf("%s", nome);

    for (int i = 0; nome[i] != '\0'; i++) {
        aux++;
    }

    printf("O nome tem %d letras.\n", aux);

    return 0;
}