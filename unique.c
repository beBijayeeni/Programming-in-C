#include <stdio.h>

int main() {
    int n,i,j,k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Removing duplicates
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (arr[i] == arr[j]) {
            	for(k=j;k<n;k++){
            		arr[k]=arr[k+1];
				}
				n--;
            }
        }
    }

    // Display array with no duplicates
    printf("\nArray without duplicates: ");
    for (i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

