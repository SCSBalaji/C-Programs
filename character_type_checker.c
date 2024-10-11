/* Program to Identify Character Type (Letter, Digit, or Special Symbol) */
// 11 October, 2024

/* Problem Statement:   If a character is entered through the keyboard,
write a program to determine whether the character is a captital letter, a small case letter, a digit or a special symbol.

The following table shows the range of ASCII values for various characters:

Characters                      ASCII Values

A - Z                           65 - 90
a - z                           97 - 122
0 - 9                           48 - 57
special symbols                 0 - 47, 58 - 64, 91 - 96, 123 - 127
*/

#include<stdio.h>
int main()
{
    char character;         // Variable declaration to store the input character

    // Prompt the user to enter a character from the keyboard
    printf("Enter a character from the keyboard:\t");
    scanf("%c",&character);

    if (character >= 65 && character <= 90)         // Check if the character is an uppercase letter
    {
        printf("The Character is a Uppercase Letter\n");
    }

    if (character >= 97 && character <= 122)        // Check if the character is a lowercase letter
    {
        printf("The Character is a Lowercase Letter\n");
    }

    if (character >= 48 && character <= 57)         // Check if the character is a digit
    {
        printf("The Character is a Digit\n");
    }

    // Check if the character is a special symbol
    if ((character >= 0 && character <= 47) || (character >= 58 && character <= 64) || (character >= 91 && character <= 96) || (character >= 123 && character <= 127) )
    {
        printf("The Character is a Special Symbol\n");
    }
    
    return 0;
}