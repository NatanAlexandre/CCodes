#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define tam 10 // tamanho

void main() {
    int vetor[tam];
    int i, maior, menor;
    // Carga 
    for (i=0;i<=tam;i++){
        printf("Digite um número: ");
        scanf("%d", &vetor[i]);
    }

    // Mostra
    for (i=0;i<=tam;i++){
        printf("%d\n", vetor[i]);
    }

    // Maior
    maior = vetor[0];
    for(i=0;i<=tam;i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("Maior = %d\n", maior);

    // Menor
    menor = vetor[0];
    for(i=0;i<=tam;i++){
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }
    printf("Menor = %d", menor);
}