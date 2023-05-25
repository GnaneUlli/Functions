#include <stdio.h>
#include <stdarg.h>

// Function declaration
int add(int a, int b);

int multiply(int a, int b);

void printMessage();

// Function with no arguments and no return value
void greet() {
    
    printf("Hello! Welcome to the program.\n");
}

// Function with arguments and return value
int subtract(int a, int b) {
    
    return a - b;
    
}

// Function with default argument
int power(int base, int exponent) {
    int result = 1;
    
    for (int i = 1; i <= exponent; i++) {
        
        result *= base;
    }
    return result;
}

// Function with variable number of arguments
int sum(int count, ...) {
    
    int total = 0;
    
    va_list args;
    
    va_start(args, count);
    
    for (int i = 0; i < count; i++) {
        
        total += va_arg(args, int);
    }
    va_end(args);
    
    return total;
}

// Recursive function
int factorial(int n) {
    
    if (n == 0 || n == 1) {
        
        return 1;
    }
    return n * factorial(n - 1);
}

// Main function
int main() {
    
    int num1 = 5, num2 = 3;

    greet();
    printf("The sum of %d and %d is: %d\n", num1, num2, add(num1, num2));
    
    printf("The product of %d and %d is: %d\n", num1, num2, multiply(num1, num2));
    
    printMessage();

    int result = subtract(num1, num2);
    
    printf("The difference between %d and %d is: %d\n", num1, num2, result);

    int base = 2, exponent = 4;
    
    int powerResult = power(base, exponent);
    
    printf("%d raised to the power of %d is: %d\n", base, exponent, powerResult);

    int sumResult = sum(5, 1, 2, 3, 4, 5);
    
    printf("The sum of 1 + 2 + 3 + 4 + 5 is: %d\n", sumResult);

    int factorialResult = factorial(5);
    
    printf("The factorial of 5 is: %d\n", factorialResult);

    return 0;
}

// Function definition
int add(int a, int b) {
    
    return a + b;
}

int multiply(int a, int b) {
    
    return a * b;
}

void printMessage() {
    
    printf("This is a function that prints a message.\n");
}

