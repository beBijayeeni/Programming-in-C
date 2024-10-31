#include <stdio.h>

int main() {
    int matrix[10][10];
    int r, c, col1, col2, temp;
    int i, j;

    // Input number of rows and columns for the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    // Input the matrix elements
    printf("\nEnter the matrix elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element [%d, %d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Input the column numbers to be interchanged
    printf("\nEnter the first column to interchange (0 to %d): ", c - 1);
    scanf("%d", &col1);
    printf("Enter the second column to interchange (0 to %d): ", c - 1);
    scanf("%d", &col2);

    // Interchange the two columns
    for(i = 0; i < r; i++) {
        temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }

    // Display the matrix after interchanging columns
    printf("\nMatrix after interchanging column %d and column %d:\n", col1, col2);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

