/*Crie um programa qual entre com argumentos e desenvolva funções que:
3.1 Calcule o máximo divisor comum (MDC);*/

#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    if(b == 0) return a;
    return mdc(b, a % b);
}

int main(){
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);
    printf("O MDC entre %d e %d eh: %d\n", a, b, mdc(a, b));

    return 0;
}