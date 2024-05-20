#include <stdio.h>

int main() {
    char nome[100];

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("O nome digitado eh: %s", nome);
    } else {
        printf("O nome nao comeca com a \n");
    }

    return 0;
}