// write a program to convert kilometers to miles
#include <stdio.h>

int main() {
    double kilometers, miles;
    const double conversionFactor = 0.621371; // 1 kilometer = 0.621371 miles

    // Prompt the user for input
    printf("Enter the distance in kilometers: ");
    scanf("%lf", &kilometers);

    // Perform the conversion
    miles = kilometers * conversionFactor;

    // Display the result
    printf("%.2f kilometers is equal to %.2f miles.\n", kilometers, miles);

    return 0;
}
