#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
    
    // Variáveis
    char nome[100];
    float n1, n2, n3, media;

    // Code
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    fflush(stdin);
    printf("Digite a 1ª notas: ");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Digite a 2ª notas: ");
    scanf("%f", &n2);
    fflush(stdin);
    printf("Digite a 3ª notas: ");
    scanf("%f", &n3);
    fflush(stdin);
    media = (n1 + n2 + n3) / 3;
    printf("A media das notas é: %.1f\n", media);


    // Condições
    if (media >= 6){
        printf("Parabéns %s você foi aprovado!", nome);
    } else{
        printf("Infelizmente %s você foi reprovado!", nome);
    }

    return 0;
}