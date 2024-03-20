#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

void preenche(int *vet){
    int i;
    printf("Preenchendo:\n");
    for (i=0;i<5;i++){
        scanf("%d", &vet[i]);
    }
}

void mostrar(int *vet){
    int i;
    printf("Mostrando: \n");
    for (i=0; i<5; i++){
        printf("%d\n", vet[i]);
    }
    
}

void main(){
    int vet[5];
    preenche(vet);
    mostrar(vet);
}