// write a program to add an integer and floating point number and dispaly the results
#include <stdio.h>

int main() {
    int int_value;
    float float_value, result;

    // Input an integer and a floating-point number
    printf("Enter an integer: ");
    scanf("%d", &int_value);

    printf("Enter a floating-point number: ");
    scanf("%f", &float_value);

    // Calculate the sum
    result = int_value + float_value;

    // Display the result
    printf("The sum of %d and %.2f is: %.2f\n", int_value, float_value, result);

    return 0;
}
