#include <stdio.h>

int main() {
    int m, n, i;
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &m);
    int arr1[m];
    printf("Enter elements of the first array:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n);
    int arr2[n];
    printf("Enter elements of the second array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int mergedArray[m + n];
    for (i = 0; i < m; i++) {
        mergedArray[i] = arr1[i];
    }
    for (i = 0; i < n; i++) {
        mergedArray[m + i] = arr2[i];
    }

    printf("\nMerged array: ");
    for (i = 0; i < m + n; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}

