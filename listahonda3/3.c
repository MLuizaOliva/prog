/*3 Repita o problema anterior para valores float*/

// Parte 3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10000

// Função para preencher o array com números aleatórios
void preencheArray(float arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = (float)rand()/(float)(RAND_MAX/1000);
    }
}

// Função de comparação para o qsort
int compara(const void * a, const void * b) {
    float arg1 = *(const float*)a;
    float arg2 = *(const float*)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

// Função para calcular a média
float calculaMedia(float arr[], int size) {
    float soma = 0;
    for (int i = 0; i < size; i++) {
        soma += arr[i];
    }
    return soma / size;
}

// Função para calcular a mediana
float calculaMediana(float arr[], int size) {
    qsort(arr, size, sizeof(float), compara);
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

// Função para calcular o desvio padrão
float calculaDesvioPadrao(float arr[], int size) {
    float media = calculaMedia(arr, size);
    float soma = 0;
    for (int i = 0; i < size; i++) {
        soma += pow(arr[i] - media, 2);
    }
    return sqrt(soma / size);
}

int main() {
    float arr[SIZE];
    preencheArray(arr, SIZE);

    printf("Média: %.2f\n", calculaMedia(arr, SIZE));
    printf("Mediana: %.2f\n", calculaMediana(arr, SIZE));
    printf("Desvio Padrão: %.2f\n", calculaDesvioPadrao(arr, SIZE));

    return 0;
}