#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int i, j;
    int soma = 0;

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma += matriz[i][j]);
        }
        printf("\n");
    }

    media = soma / 9;

    printf("soma = %d", soma);
    printf("media = %d", media);
    
    return 0;
}