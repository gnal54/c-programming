//write a program to find the product of two floating point numbers
#include <stdio.h>

int main() {
    float num1, num2, product;

    // Prompt the user to enter two floating-point numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate the product
    product = num1 * num2;

    // Display the result
    printf("The product of %.2f and %.2f is: %.2f\n", num1, num2, product);

    return 0;
}
