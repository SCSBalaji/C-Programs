/* Program to check if a number is even or odd */
// 17 September, 2024

/* Problem Statement:   Any integer is input through the keyboard.
Write a program to find out whether it is an odd number or even number. */

#include<stdio.h>
int main()
{
    int number;         // Declare an integer variable to hold the input number

    printf("Enter any Number:\t");          // Prompt the user to enter a number
    scanf("%d",&number);            // Read the input number from the user

    // Check if the number is even or odd using the modulus operator
    if (number % 2 == 0)            // If remainder when divided by 2 is 0, it is even    
    {
        printf("The Number is Even\n");     // Output message for even number
    }
    else            // If remainder is not 0, the number is odd
    {
        printf("The Number is Odd\n");      // Output message for odd number
    }
    
    return 0;       // Return 0 to indicate successful execution
}