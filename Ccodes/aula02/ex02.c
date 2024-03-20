#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
    float peso, altura, imc;

    printf("Qual seu peso? R: ");
    scanf("%f", &peso);
    fflush(stdin);
    printf("Qual sua altura? R: ");
    scanf("%f", &altura);
    fflush(stdin);

    imc = peso / (altura * altura);
    if (imc <= 18.5){
        printf("Você está abaixo do peso!");
    } else if (imc > 18.5 && imc <= 24.9){
        printf("Você está no peso ideal!");
    } else if (imc > 24.9 && imc <= 30){
        printf("VocÊ está acima do peso");
    } else {
        printf("Você está quase igual a Thais Carla, melhor se cuidar ein!!");
    }

    return 0;
}


