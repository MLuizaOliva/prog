/*4 Repita o problema anterior,
mas utilize um array 
bi-dimensional com número de elementos iguais nas dimensões;*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 100

// Função para preencher o array com números aleatórios
void preencheArray(float arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            arr[i][j] = (float)rand()/(float)(RAND_MAX/1000);
        }
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
float calculaMedia(float arr[SIZE][SIZE]) {
    float soma = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            soma += arr[i][j];
        }
    }
    return soma / (SIZE * SIZE);
}

// Função para calcular a mediana
float calculaMediana(float arr[SIZE][SIZE]) {
    float temp[SIZE * SIZE];
    int index = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            temp[index++] = arr[i][j];
        }
    }
    qsort(temp, SIZE * SIZE, sizeof(float), compara);
    if ((SIZE * SIZE) % 2 == 0) {
        return (temp[(SIZE * SIZE) / 2 - 1] + temp[(SIZE * SIZE) / 2]) / 2.0;
    } else {
        return temp[(SIZE * SIZE) / 2];
    }
}

// Função para calcular o desvio padrão
float calculaDesvioPadrao(float arr[SIZE][SIZE]) {
    float media = calculaMedia(arr);
    float soma = 0;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            soma += pow(arr[i][j] - media, 2);
        }
    }
    return sqrt(soma / (SIZE * SIZE));
}

int main() {
    float arr[SIZE][SIZE];
    preencheArray(arr);

    printf("Media: %.2f\n", calculaMedia(arr));
    printf("Mediana: %.2f\n", calculaMediana(arr));
    printf("Desvio Padrão: %.2f\n", calculaDesvioPadrao(arr));

    return 0;
}