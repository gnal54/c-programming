//write a program to convert hours into minutes and seconds
#include <stdio.h>

int main() {
    int hours, minutes, seconds;

    // Prompt the user for input
    printf("Enter the time in hours: ");
    scanf("%d", &hours);

    // Perform the conversion
    minutes = hours * 60;        // 1 hour = 60 minutes
    seconds = hours * 3600;      // 1 hour = 3600 seconds

    // Display the results
    printf("%d hours is equal to %d minutes and %d seconds.\n", hours, minutes, seconds);

    return 0;
}
