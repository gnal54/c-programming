// write a program to convert miles to kilometer (1mile = 1.60934)
#include <stdio.h>

int main() {
    double miles, kilometers;
    const double conversionFactor = 1.60934; // 1 mile = 1.60934 kilometers

    // Prompt the user for input
    printf("Enter the distance in miles: ");
    scanf("%lf", &miles);

    // Perform the conversion
    kilometers = miles * conversionFactor;

    // Display the result
    printf("%.2f miles is equal to %.2f kilometers.\n", miles, kilometers);

    return 0;
}
