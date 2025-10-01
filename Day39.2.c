//Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];
    int sum = 0;

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if(i == j) {
                sum += matrix[i][j]; // Add main diagonal elements
            }
        }
    }

    printf("%d\n", sum);

    return 0;
}