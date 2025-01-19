// write a program to input two integers and swap their value using a third variables
#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Input two integers from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Display the original values
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    // Swap the values using a third variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped values
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
