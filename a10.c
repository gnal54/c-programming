// write a program to input a floating point number and dispaly its integer equivalent
#include <stdio.h>

int main() {
    float float_value;
    int int_value;

    // Input a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &float_value);

    // Convert the floating-point number to an integer
    int_value = (int)float_value;

    // Display the integer equivalent
    printf("The integer equivalent of %.2f is: %d\n", float_value, int_value);

    return 0;
}
