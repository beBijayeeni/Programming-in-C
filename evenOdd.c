#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], oddArr[n], evenArr[n];
    int oddCount = 0, evenCount = 0;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (i % 2 == 0) { // Even index
            evenArr[evenCount] = arr[i];
            evenCount++;
        } else { // Odd index
            oddArr[oddCount] = arr[i];
            oddCount++;
        }
    }

    printf("\nEven position elements: ");
    for (i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd position elements: ");
    for (i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    return 0;
}

