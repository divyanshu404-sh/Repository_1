//Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Diagonal traversal: ");

    for(int gap = 0; gap < rows + cols - 1; gap++) {
        for(int i = 0; i < rows; i++) {
            int j = gap - i;
            if(j >= 0 && j < cols) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    printf("\n");
    return 0;
}