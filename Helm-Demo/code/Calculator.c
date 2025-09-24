#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Basic division by zero check
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
                return 1; // Indicate an error
            }
            result = num1 / num2;
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1; // Indicate an error
    }

    printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0; // Indicate success
}