// write a program to calculate the power of a number(base^exponent)using only int variables
#include <stdio.h>

int main() {
    int base, exponent, result = 1;

    // Prompt the user to enter the base and exponent
    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    // Validate if the exponent is non-negative
    if (exponent < 0) {
        printf("This program supports only non-negative exponents.\n");
        return 1; // Exit the program
    }

    // Calculate base^exponent
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    // Display the result
    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}
