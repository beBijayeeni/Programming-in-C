#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int isPerfect(int sum) {
    int i, perfectSum = 0;
    for ( i = 1; i < sum; i++) {
        if (sum % i == 0) perfectSum += i;
    }
    return perfectSum;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = sumOfDigits(num);
    printf("Sum of digits: %d\n", sum);
    int perfect = isPerfect(sum);
    if (perfect==sum)
        printf("The sum is a perfect number.\n");
    else
        printf("The sum is not a perfect number.\n");

    return 0;
}

