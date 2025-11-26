Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int matrix[100][100];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Diagonal Traversal:\n");
    for (int col = 0; col < m; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    for (int row = 1; row < n; row++) {
        int i = row, j = m - 1;
        while (i < n && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
    }
    printf("\n");
    return 0;
}

Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    int a[100][100];
    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    int b[100][100];
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 0;
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int result[100][100];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
