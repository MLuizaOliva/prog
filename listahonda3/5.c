/* 5 Utilizando o exercício anterior, desenvolva:
◦ Somatória das linhas e colunas, quais devem ser armazenadas em array(s);
◦ Calcule a média, mediana (ordenação obrigatória) e desvio padrão dos valores das linhas e colunas;*/

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

// Função para calcular a somatória das linhas e colunas
void calculaSomatoria(float arr[SIZE][SIZE], float somaLinhas[SIZE], float somaColunas[SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        somaLinhas[i] = 0;
        somaColunas[i] = 0;
        for (int j = 0; j < SIZE; j++) {
            somaLinhas[i] += arr[i][j];
            somaColunas[i] += arr[j][i];
        }
    }
}

int main() {
    float arr[SIZE][SIZE];
    float somaLinhas[SIZE], somaColunas[SIZE];
    preencheArray(arr);

    calculaSomatoria(arr, somaLinhas, somaColunas);

    printf("Média das somas das linhas: %.2f\n", calculaMedia(somaLinhas, SIZE));
    printf("Mediana das somas das linhas: %.2f\n", calculaMediana(somaLinhas, SIZE));
    printf("Desvio Padrão das somas das linhas: %.2f\n", calculaDesvioPadrao(somaLinhas, SIZE));

    printf("Media das somas das colunas: %.2f\n", calculaMedia(somaColunas, SIZE));
    printf("Mediana das somas das colunas: %.2f\n", calculaMediana(somaColunas, SIZE));
    printf("Desvio Padrão das somas das colunas: %.2f\n", calculaDesvioPadrao(somaColunas, SIZE));

    return 0;
}
