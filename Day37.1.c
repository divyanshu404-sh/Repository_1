//Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int rowSum[rows];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize row sum
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            rowSum[i] += matrix[i][j]; // Add element to row sum
        }
    }

    printf("Sum of each row:\n");
    for(int i = 0; i < rows; i++) {
        printf("Row %d sum: %d\n", i, rowSum[i]);
    }

    return 0;
}