/*  2 Crie um array unidimensional e desenvolva:
◦ Utiliza funções quando possível;
◦ Array de inteiros para 10.000 elementos;
◦ Randomicamente insira valores, entre 0 e 1000 nos elementos;
◦ Descubra quais são os três maiores e menores valores;
◦ Calcule a média, mediana (ordenação obrigatória) e desvio padrão dos valores;
◦ Apresente as informações sobre os valores repetidos (qual valor, quantidade de vezes, etc);
◦ Insira os valores em um novo array com o tamanho exato dos elementos sem repetições;
◦ Calcule novamente a média, mediana (ordenação obrigatória) e desvio padrão dos valores, 
reutilizando função anteriormente desenvolvida;*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10000

// Função para preencher o array com números aleatórios
void preencheArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1001;
    }
}

// Função de comparação para o qsort
int compara(const void * a, const void * b) {
    return (*(int*)a - *(int*)b);
}

// Função para calcular a média
double calculaMedia(int arr[], int size) {
    int soma = 0;
    for (int i = 0; i < size; i++) {
        soma += arr[i];
    }
    return (double)soma / size;
}

// Função para calcular a mediana
double calculaMediana(int arr[], int size) {
    qsort(arr, size, sizeof(int), compara);
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

// Função para calcular o desvio padrão
double calculaDesvioPadrao(int arr[], int size) {
    double media = calculaMedia(arr, size);
    double soma = 0;
    for (int i = 0; i < size; i++) {
        soma += pow(arr[i] - media, 2);
    }
    return sqrt(soma / size);
}

int main() {
    int arr[SIZE];
    preencheArray(arr, SIZE);

    printf("Média: %.2f\n", calculaMedia(arr, SIZE));
    printf("Mediana: %.2f\n", calculaMediana(arr, SIZE));
    printf("Desvio Padrão: %.2f\n", calculaDesvioPadrao(arr, SIZE));

    return 0;
}
