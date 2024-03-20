#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Sistema de cálculos de Médias escolares\n");
    
    char nome[1000];
    printf("Digite o nome do Aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0'; // Remove o caractere de nova linha
    
    char *nome_lista[100];
    int n = 0;
    char *token = strtok(nome, " ");
    while (token != NULL) {
        nome_lista[n] = malloc(strlen(token) + 1);
        if (token[0] >= 'a' && token[0] <= 'z') {
            token[0] = toupper(token[0]);
        }
        strcpy(nome_lista[n], token);
        token = strtok(NULL, " ");
        n++;
    }
    
    float nota1, nota2, nota3, nota4;
    printf("Digite a 1ª nota: ");
    scanf("%f", &nota1);
    printf("Digite a 2ª nota: ");
    scanf("%f", &nota2);
    printf("Digite a 3ª nota: ");
    scanf("%f", &nota3);
    printf("Digite a 4ª nota: ");
    scanf("%f", &nota4);

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    char name[1000] = "";
    for (int i = 0; i < n; i++) {
        strcat(name, nome_lista[i]);
        strcat(name, " ");
        free(nome_lista[i]);
    }
    
    if (media > 6) {
        printf("%s está Aprovado!\n", name);
    } else if (media < 6 && media >= 4) {
        printf("%s está de Exame!\n", name);
    } else {
        printf("%s está Reprovado!\n", name);
    }

    return 0;
}
