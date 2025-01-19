// write a program to calculate the area of a rectangle using int variables
#include <stdio.h>

int main() {
    int length, width, area;

    // Input length and width of the rectangle
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    // Calculate the area of the rectangle
    area = length * width;

    // Display the area
    printf("The area of the rectangle is: %d\n", area);

    return 0;
}
