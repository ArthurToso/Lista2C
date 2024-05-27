#include <stdio.h>

#define MAX_ALUNOS 10

struct Aluno {
    int matricula;
    char nome[50];
    int codigo_disciplina;
    float nota1;
    float nota2;
};

float calcularMedia(float nota1, float nota2) {
    return (nota1 * 1.0 + nota2 * 2.0) / 3.0;
}

int main() {

    struct Aluno alunos[MAX_ALUNOS];

    int num_alunos;

    do {
        printf("Digite o numero de alunos na turma (maximo 10): ");
        scanf("%d", &num_alunos);
    } while (num_alunos < 0 || num_alunos > MAX_ALUNOS);

    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Codigo da disciplina: ");
        scanf("%d", &alunos[i].codigo_disciplina);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\nListagem final dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("\nAluno %d:\n", i+1);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Codigo da disciplina: %d\n", alunos[i].codigo_disciplina);
        printf("Nota 1: %.2f\n", alunos[i].nota1);
        printf("Nota 2: %.2f\n", alunos[i].nota2);
        float media = calcularMedia(alunos[i].nota1, alunos[i].nota2);
        printf("Media final: %.2f\n", media);
    }

    return 0;
}