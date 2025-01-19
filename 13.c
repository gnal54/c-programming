// write a program to input two characters and dispaly their concatenated ASCII values
#include <stdio.h>

int main() {
    char char1, char2;
    int ascii1, ascii2;

    // Input two characters from the user
    printf("Enter the first character: ");
    scanf("%c", &char1);  // Input the first character
    getchar();  // To consume the newline character left by previous input

    printf("Enter the second character: ");
    scanf("%c", &char2);  // Input the second character

    // Get the ASCII values of the characters
    ascii1 = (int)char1;
    ascii2 = (int)char2;

    // Display the concatenated ASCII values
    printf("The concatenated ASCII values of '%c' and '%c' are: %d%d\n", char1, char2, ascii1, ascii2);

    return 0;
}
