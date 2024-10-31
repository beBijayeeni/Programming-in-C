#include <stdio.h>

int isPrime(int num) {
	int i;
    if (num <= 1) return 0;  // Numbers less than or equal to 1 are not prime
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // If num is divisible by any i, it's not prime
    }
    return 1;  // If no divisors found, num is prime
}

int main() {
    int n, i,count = 0;

    // Input the number of elements in the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    // Input the elements of the array
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array: ");
    for (i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);  // Display prime number
            count++;
        }
    }

    printf("\nNumber of prime numbers: %d\n", count);  // Display count of prime numbers

    return 0;
}

