#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Get user input
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display result
    printf("Sum: %d\n", sum);

    return 0;
}
