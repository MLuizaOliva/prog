/*Para arrays 3 dimensionais, desenvolva:
◦ Array de inteiros com dimensões (10, 20, 5);
◦ Preencha com valores sequenciais;
◦ Apresente os valores.*/
]// Parte 6

#include <stdio.h>

#define DIM1 10
#define DIM2 20
#define DIM3 5

int main() {
    int arr[DIM1][DIM2][DIM3];
    int valor = 0;

    // Preenchendo o array com valores sequenciais
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                arr[i][j][k] = valor++;
            }
        }
    }

    // Apresentando os valores
    for (int i = 0; i < DIM1; i++) {
        for (int j = 0; j < DIM2; j++) {
            for (int k = 0; k < DIM3; k++) {
                printf("arr[%d][%d][%d] = %d\n", i, j, k, arr[i][j][k]);
            }
        }
    }

    return 0;
}