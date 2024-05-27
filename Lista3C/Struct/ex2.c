#include <stdio.h>
#include <string.h>

struct Pessoa{
    char nome[255];
    int idade;
    char endereco[255];
};

int main(){

    char nome[255];
    int idade;
    char endereco[255];
    struct Pessoa pessoa1;

    printf("Digite o seu nome: ");
    scanf("%s",&nome);
    strcpy(pessoa1.nome, nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    pessoa1.idade = idade;

    printf("Digite seu endereco: ");
    scanf("%s", &endereco);
    strcpy(pessoa1.endereco, endereco);

    printf("Nome: %s\n",pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Endereco: %s\n", pessoa1.endereco);

    return 0;
}