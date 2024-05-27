#include <stdio.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Informe a matricula do aluno %d: ", i+1);
        scanf("%d", &alunos[i].matricula);

        printf("Informe o nome do aluno %d: ", i+1);
        scanf("%s", alunos[i].nome);

        printf("Informe a nota da primeira prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota1);

        printf("Informe a nota da segunda prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota2);

        printf("Informe a nota da terceira prova do aluno %d: ", i+1);
        scanf("%f", &alunos[i].nota3);
    }

    int indice_maior_nota1 = 0;
    for (int i = 1; i < 5; i++) {
        if (alunos[i].nota1 > alunos[indice_maior_nota1].nota1) {
            indice_maior_nota1 = i;
        }
    }

    printf("\nAluno com a maior nota na primeira prova:\n");
    printf("Nome: %s\n", alunos[indice_maior_nota1].nome);
    printf("Nota na primeira prova: %.2f\n", alunos[indice_maior_nota1].nota1);

    int indice_maior_media = 0;
    float maior_media = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    for (int i = 1; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media > maior_media) {
            maior_media = media;
            indice_maior_media = i;
        }
    }

    printf("\nAluno com a maior média geral:\n");
    printf("Nome: %s\n", alunos[indice_maior_media].nome);
    printf("Média geral: %.2f\n", maior_media);

    int indice_menor_media = 0;
    float menor_media = (alunos[0].nota1 + alunos[0].nota2 + alunos[0].nota3) / 3;
    for (int i = 1; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media < menor_media) {
            menor_media = media;
            indice_menor_media = i;
        }
    }

    printf("\nAluno com a menor média geral:\n");
    printf("Nome: %s\n", alunos[indice_menor_media].nome);
    printf("Média geral: %.2f\n", menor_media);

    printf("\nSituação dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media >= 6.0) {
            printf("%s - Aprovado\n", alunos[i].nome);
        } else {
            printf("%s - Reprovado\n", alunos[i].nome);
        }
    }

    return 0;
}

