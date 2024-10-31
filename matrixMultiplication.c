#include <stdio.h>

int main() {
    int r1, c1, r2, c2,i,j,k;
    
    // Input the dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d %d", &r1, &c1);
    
    // Input the dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d %d", &r2, &c2);
    
    // Check if multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first matrix must equal rows of second matrix.\n");
    }
    
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }
    
    // Initialize the result matrix to 0
    /*for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }*/
    
    // Perform matrix multiplication
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
        	result[i][j] = 0;
            for (k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    // Print the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

