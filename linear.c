#include <stdio.h>

int main() {
    int n, i, key, found = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    for ( i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Element %d is present in the array.\n", key);
    } else {
        printf("Element %d is not present in the array.\n", key);
    }

    return 0;
}
