#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void main(){
    float nota1, nota2, nota3, nota4, media;
    printf("Digite as 4 notas para o cálculo da média:\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Média das notas é: %.1f", media);

    if (media > 5){
        printf("Você está Aprovado!");
    } else if (media < 4) {
        printf("Você está Reprovado!");
    } else {
        printf("Você está de Exame!");
    }
    
}

