/*Desenvolva utilizando a Linguagem de programação C:
Array com nomes (10~20);
Imprima a ordem atual dos nomes;
Ordene esse array (força bruta);
Imprima os nomes ordenados;
Imprima o primeiro nome, o ultimo nome e o nome mediano;
Imprima os nomes inversamente ordenados;*/


#include <stdio.h>
#include <string.h>

#define MAX_TAMANHO 20

void imprimir_nomes(char nomes[MAX_TAMANHO][50], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%s\n", nomes[i]);
    }
}

void ordenar_nomes(char nomes[MAX_TAMANHO][50], int tamanho) {
    char temp[50];
    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = i + 1; j < tamanho; j++) {
            if(strcmp(nomes[i], nomes[j]) > 0) {
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }
}

int main() {
    char nomes[MAX_TAMANHO][50];
    int quantidade;

    printf("Digite a quantidade de nomes (entre 3 e 10):\n");
    scanf("%d", &quantidade);

    if(quantidade < 3 || quantidade > 10) {
        printf("Quantidade invalida. Deve ser entre 10 e 20.\n");
        return 1;
    }

    printf("Digite %d nomes:\n", quantidade);
    for(int i = 0; i < quantidade; i++) {
        scanf("%49s", nomes[i]);
    }

    printf("Ordem original:\n");
    imprimir_nomes(nomes, quantidade);

    ordenar_nomes(nomes, quantidade);

    printf("\nOrdem ordenada:\n");
    imprimir_nomes(nomes, quantidade);

    printf("\nPrimeiro nome: %s\n", nomes[0]);
    printf("Ultimo nome: %s\n", nomes[quantidade - 1]);
    printf("Nome mediano: %s\n", nomes[quantidade / 2]);

    printf("\nOrdem inversa:\n");
    for(int i = quantidade - 1; i >= 0; i--) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}