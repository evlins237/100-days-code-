Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}
