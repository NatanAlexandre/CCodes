#include <stdio.h>
#include <stdlib.h>

void main(){
    int a, b, res;
    printf("Digite 2 inteiros: ");
    scanf("%d%d", &a, &b);
    res = a%b;
    printf("Resultado %d", res);
}