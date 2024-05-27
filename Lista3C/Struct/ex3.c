#include <stdio.h>
#include <string.h>

struct Aluno{

    char nome[50];
    int matricula;
    char curso[50];
};

int main(){

    struct Aluno aluno[5];

    for(int i=0; i<5; i++){

        printf("Digite o nome do Aluno %d: \n", i+1);
        scanf("%s",aluno[i].nome);
        printf("Digite o numero da matricula do aluno %d: \n", i+1);
        scanf("%d",&aluno[i].matricula);
        printf("Digite o curso do Aluno %d: \n", i+1);
        scanf("%s",aluno[i].curso);

    }

    printf("Alunos: \n");

    for(int i=0; i<5; i++){
        printf("Nome do Aluno %d: %s\n", i+1, aluno[i].nome);
        printf("Matricula do aluno %d: %d\n", i+1, aluno[i].matricula);
        printf("Curso do Aluno %d: %s\n", i+1, aluno[i].curso);
    }

    return 0;
}