#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define tam 8

void main(){
    int vetor[tam];
    int i, maior, menor;
    float media;
    int lista = 0;

    for (i=0;i<tam;i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for(i=0;i<tam;i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    menor = vetor[0];
    for(i=0;i<tam;i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    for(i=0; i<tam; i++){
        lista += vetor[i];
    }

    media = lista / tam;

    printf("O maior elemento armazenado no vetor é: %d\n", maior);
    printf("O menor elemento armazenado no vetor é: %d\n", menor);
    printf("A média dos números é: %.1f", media);
    
}