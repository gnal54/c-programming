// write a program to input and dispaly a multi word string using gets() and puts()
#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    gets(str); // Read the input string (including spaces)

    // Display the entered string
    printf("You entered: ");
    puts(str); // Print the string

    return 0;
}
