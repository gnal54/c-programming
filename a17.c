// write a program to calculate the perimeter of a circle using a double constant for pi
#include <stdio.h>

int main() {
    const double PI = 3.141592653589793; // Define a constant for π (pi)
    double radius, perimeter;

    // Prompt the user to enter the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the perimeter
    perimeter = 2 * PI * radius;

    // Display the result
    printf("The perimeter of the circle is: %.2lf\n", perimeter);

    return 0;
}
