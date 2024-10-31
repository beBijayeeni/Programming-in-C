#include<stdio.h>

// Function prototypes for arithmetic operations
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main() {
    float num1, num2, result;
    int choice;
    // Get the two numbers from the user
    printf("Enter two numbers:\n");
    scanf("%f %f", &num1, &num2);
    // Display menu for the calculator
    printf("Simple Arithmetic Calculator\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use switch case to perform the chosen operation
    switch (choice) {
        case 1:
            result = add(num1, num2);  // Call add function
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = subtract(num1, num2);  // Call subtract function
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = multiply(num1, num2);  // Call multiply function
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);  // Call divide function
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice! Please enter a valid option.\n");
    }

    return 0;
}

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    return a / b;
}

