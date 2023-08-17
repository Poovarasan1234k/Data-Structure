#include <stdio.h>
#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3
void multiplyMatrices(int mat1[][COL1], int mat2[][COL2], int result[][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void displayMatrix(int mat[][COL2]) {
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int matrix1[ROW1][COL1] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2[ROW2][COL2] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    int result[ROW1][COL2];
    multiplyMatrices(matrix1, matrix2, result);
    printf("Matrix 1:\n");
    displayMatrix(matrix1);
    printf("\nMatrix 2:\n");
    displayMatrix(matrix2);
    printf("\nResultant Matrix:\n");
    displayMatrix(result);    
    return 0;
}