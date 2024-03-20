#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main() {
    
    int resultado, numero;
    int inicio = 1;
    int fim = 10;

    printf("Informe um número para ver sua tabuada: ");
    scanf("%d", &numero);

    for (int i = inicio; i <= fim; i++){
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}