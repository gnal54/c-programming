// write a program to convert temperature from temperature from fahrenheit to celsius
#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    // Prompt the user for input
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Perform the conversion
    celsius = (fahrenheit - 32) * 5 / 9;

    // Display the result
    printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);

    return 0;
}
