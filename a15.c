// write a program to calculate the cube of a floating point number
#include <stdio.h>

int main() {
    float number, cube;

    // Input a floating-point number
    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    // Calculate the cube of the number
    cube = number * number * number;

    // Display the result
    printf("The cube of %.2f is: %.2f\n", number, cube);

    return 0;
}
