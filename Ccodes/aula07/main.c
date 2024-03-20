# include <stdio.h>
#include <stdlib.h>

struct ficha {
    int matricula;
    float media;
    char nome[30];
};

void main(){
    struct ficha aluno;
    printf("Digite a matricula: ");
    scanf("%d", &aluno.matricula);
    printf("Digite a média: ");
    scanf("%f", &aluno.media);
    printf("Digite o nome: ");
    scanf("%s", aluno.nome);

    printf("\n\nMatricula = %d\n", aluno.matricula);
    printf("Media = %.2f\n", aluno.media);
    printf("Nome = %s\n", aluno.nome);
    getchar();
}