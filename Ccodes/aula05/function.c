#include <stdio.h>
#include <stdlib.h>

int calculo(int a, int b){
    int res;
    res = a%b;

    return res;
}

void main(){
    int a, b;
    printf("Digite 2 inteiros: ");
    scanf("%d%d", &a, &b);
    
    printf("Resultado %d", calculo(a, b));
}