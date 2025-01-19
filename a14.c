// write a program to find the square of an integer
#include <stdio.h>

int main() {
    int number, square;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate the square of the integer
    square = number * number;

    // Display the result
    printf("The square of %d is: %d\n", number, square);

    return 0;
}
