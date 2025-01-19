// write a program to input a character and dispaly its ASCII value
#include <stdio.h>

int main() {
    char character; // Variable to store the input character

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Display the ASCII value of the character
    printf("The ASCII value of '%c' is: %d\n", character, character);

    return 0;
}
