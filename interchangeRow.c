#include <stdio.h>

int main() {
    int matrix[10][10];
    int r, c, row1, row2, temp;
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

    // Input the row numbers to be interchanged
    printf("\nEnter the first row to interchange (0 to %d): ", r - 1);
    scanf("%d", &row1);
    printf("Enter the second row to interchange (0 to %d): ", r - 1);
    scanf("%d", &row2);

    // Interchange the two rows
    for(j = 0; j < c; j++) {
        temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }

    // Display the matrix after interchanging rows
    printf("\nMatrix after interchanging row %d and row %d:\n", row1, row2);
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

