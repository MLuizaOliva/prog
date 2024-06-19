/*Desenvolver programa que:
- Receba 6 valores (1 ~60);
- Realize sorteio de maneira aleatória entre 1~60;
- Verifique acertos e registre o contador de quando o número for acertado;
-  Verifique o total de números sorteados para acertar os 6 valores (sena).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QTD_NUMEROS 6
#define MAX 60

long long fatorial(int n) {
    long long fat = 1;
    for(int i = 2; i <= n; i++) {
        fat *= i;
    }
    return fat;
}

long long combinacao(int n, int k) {
    return fatorial(n) / (fatorial(k) * fatorial(n - k));
}

int main() {
    int numeros_inseridos[QTD_NUMEROS], numeros_sorteados[QTD_NUMEROS];
    int i, j, sorteio, acertos = 0;

    srand(time(0));

    printf("Insira 6 números entre 1 e 60:\n");
    for (i = 0; i < QTD_NUMEROS; i++) {
        scanf("%d", &numeros_inseridos[i]);
    }

    printf("Números sorteados:\n");
    for (i = 0; i < QTD_NUMEROS; i++) {
        numeros_sorteados[i] = rand() % MAX + 1;
        printf("%d ", numeros_sorteados[i]);
    }
    printf("\n");

    for (i = 0; i < QTD_NUMEROS; i++) {
        for (j = 0; j < QTD_NUMEROS; j++) {
            if (numeros_inseridos[i] == numeros_sorteados[j]) {
                acertos++;
                break;
            }
        }
    }

    printf("Você acertou %d números!\n", acertos);
    printf("Sua chance de acertar todos os números era de 1 em %lld.\n", combinacao(MAX, QTD_NUMEROS));

    return 0;
}