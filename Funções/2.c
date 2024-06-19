/*Crie um programa qual entre com argumentos e desenvolva funções que:
2.1 Transforme Celsius e Farenheit a depender da escolha;*/

#include <stdio.h>
#include <stdlib.h>

float celsiusParaFarenheit(float celsius) {
    return celsius * 9 / 5 + 32;
}

int main(){
    float celsius;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    printf("A temperatura em Farenheit eh: %.2f\n", celsiusParaFarenheit(celsius));

    return 0;
}


