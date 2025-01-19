// write a program to convert temperature from celsius to fahrenheit.
#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Prompt the user for input
    printf("Enter the temperature in Celsius: ");
    scanf("%lf", &celsius);

    // Perform the conversion
    fahrenheit = (celsius * 9 / 5) + 32;

    // Display the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
