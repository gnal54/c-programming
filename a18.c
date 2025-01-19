// write a program to check whether a given character is a vowel or constant
#include <stdio.h>
//#include <ctype.h> // For character functions like tolower()

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the input is an alphabet
    if (isalpha(ch)) {
        // Convert character to lowercase for comparison
        char lowerCh = tolower(ch);

        // Check for vowels
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
