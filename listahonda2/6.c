/*Crie um programa qual entre com argumentos e desenvolva funções que:
6.1 Retorne o número sorteado de um dado;
6.2 Verifique o número de sorteios necessários para que sejam sorteados todos os números,
por pelo menos 1 vez;
6.3 Em uma quantidade grande de repetições (1 milhão ou mais, informada via argumento),
quantas vezes cada valor foi sorteado;*/

#include <stdlib.h>
#include <time.h>

#define DADO 6

int sortearNumero() {
    return rand() % DADO + 1;
}

// Função para verificar o número de sorteios necessários para que todos os números sejam sorteados pelo menos uma vez
int sorteiosParaTodos() {
    int sorteados[DADO] = {0};
    int totalSorteados = 0;
    int sorteios = 0;

    while(totalSorteados < DADO) {
        int numero = sortearNumero();
        if(sorteados[numero - 1] == 0) {
            sorteados[numero - 1] = 1;
            totalSorteados++;
        }
        sorteios++;
    }

    return sorteios;
}

// Função para contar quantas vezes cada valor foi sorteado em uma quantidade grande de repetições
void contarSorteios(int repeticoes) {
    int contagem[DADO] = {0};

    for(int i = 0; i < repeticoes; i++) {
        int numero = sortearNumero();
        contagem[numero - 1]++;
    }

    for(int i = 0; i < DADO; i++) {
        printf("O numero %d foi sorteado %d vezes\n", i + 1, contagem[i]);
    }
}

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if(argc != 2) {
        printf("Por favor, insira o numero de repeticoes como argumento.\n");
        return 1;
    }

    int repeticoes = atoi(argv[1]);

    printf("Numero sorteado: %d\n", sortearNumero());
    printf("Sorteios para todos os numeros: %d\n", sorteiosParaTodos());
    contarSorteios(repeticoes);

    return 0;
}