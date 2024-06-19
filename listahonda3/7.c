/*    7 Desenvolva um jogo de palavras-cruzadas. Tendo:
◦ Valores lido do teclado devem ser strings, para respostas;
◦ Além da tentativa de resposta, deve se entrar o endereço para respostas;
◦ Uma visualização mínima das palavras, espaços a serem preenchidos e as charadas, figura ao lado;
◦ Podendo utilizar palavras e suas charadas previamente definidas;*/

// Parte 7

#include <stdio.h>
#include <string.h>

#define SIZE 10
#define WORD_COUNT 3

// Função para imprimir o tabuleiro
void printBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char board[SIZE][SIZE];
    char words[WORD_COUNT][SIZE] = {"apple", "banana", "cherry"};
    char clues[WORD_COUNT][SIZE] = {"A red fruit", "A long yellow fruit", "A small red fruit"};

    // Inicializando o tabuleiro com espaços vazios
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '_';
        }
    }

    for (int i = 0; i < WORD_COUNT; i++) {
        printf("Dica: %s\n", clues[i]);
        printBoard(board);

        char answer[SIZE];
        int x, y;
        printf("Digite a resposta e as coordenadas (x y): ");
        scanf("%s %d %d", answer, &x, &y);

        // Colocando a palavra no tabuleiro
        for (int j = 0; j < strlen(answer); j++) {
            board[x][y + j] = answer[j];
        }
    }

    printf("Tabuleiro final:\n");
    printBoard(board);

    return 0;
}