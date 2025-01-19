// write program to input and display string using char arrays
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string (max length 99 characters + null terminator)

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read the string input, including spaces

    printf("You entered: %s", str); // Display the input string

    return 0;
}


