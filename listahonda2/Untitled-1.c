
#define SIZE 5
#define ROWS 3
#define COLS 3

int main() {
    // Vetor em C
    int vetor[SIZE] = {1, 2, 3, 4, 5};
    printf("Elementos do vetor:\n");
    for(int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Matriz em C
    int matriz[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Elementos da matriz:\n");
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}