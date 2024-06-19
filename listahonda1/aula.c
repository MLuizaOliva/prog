/*Desenvolva utilizando a Linguagem de programação C:
Array com nomes (10~20);
Imprima a ordem atual dos nomes;
Ordene esse array (força bruta);
Imprima os nomes ordenados;
Imprima o primeiro nome, o ultimo nome e o nome mediano;
Imprima os nomes inversamente ordenados;
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] ) {
    int n;
    printf("Digite a quantidade de nomes: ");
    scanf("%d", &n);

    if(n > 20) {
        printf("Erro: máximo de nomes excedido.\n");
        return 1;
    }

    char nomes[20][50];
    for(int i = 0; i < n; i++) {
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("Nomes:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(nomes[i], nomes[j]) > 0) {
                char temp[50];
                strcpy(temp, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], temp);
            }
        }
    }

    printf("Nomes ordenados:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", nomes[i]);
    }

    printf("Primeiro nome: %s\n", nomes[0]);
    printf("ultimo nome: %s\n", nomes[n - 1]);
    printf("Nome mediano: %s\n", nomes[n / 2]);

    printf("Nomes inversamente ordenados:\n");
    for(int i = n - 1; i >= 0; i--) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}