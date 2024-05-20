#include <stdio.h>

int main() {
    char nome[100];
    char sexo;
    int idade;

    printf("Digite o nome: ");
    scanf("%s", nome);

    printf("Digite o sexo: ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (sexo == 'F' || sexo == 'f') {
        if (idade < 25) {
            printf("Nome: %s\n", nome);
            printf("Aceita!");
        } else {
            printf("Nao aceita!\n");
        }
    } else {
        printf("Nao aceita!\n");
    }

    return 0;
}