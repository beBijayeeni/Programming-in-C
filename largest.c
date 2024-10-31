#include <stdio.h>

int main() {
    int n, i, largest;

    // Ask the user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare an array to hold the numbers
    int numbers[n];

    // Input the elements into the array
    printf("Enter %d numbers: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Initialize the largest variable with the first element of the array
    largest = 0;

    // Loop through the array to find the largest element
    for(i = 1; i < n; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    // Display the largest element
    printf("The largest number is: %d\n", largest);

    return 0;
}

