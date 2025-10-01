//Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    if(rows != cols) {
        printf("False\n"); // Only square matrices can be symmetric
        return 0;
    }

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int symmetric = 1; // Assume it is symmetric

    for(int i = 0; i < rows; i++) {
        for(int j = i+1; j < cols; j++) { // Only check upper triangle
            if(matrix[i][j] != matrix[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if(!symmetric) break;
    }

    if(symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}