/* Program to Reverse a Five-Digit Number and Check Equality */
// 09 October, 2024

/* Problem Statement:   A five-digit number is entered through the keyboard. 
Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.*/

#include<stdio.h>
int main()
{
    int number, initial_number, digit;      // Declare variables for the number, initial number, and individual digits
    long int reverse_number = 0;            // Variable to store the reversed number

    printf("Enter a five digit number <= 32767:  ");        // Input a five-digit number from the user
    scanf("%d",&number);

    initial_number = number;            // Store the original number for comparison later

    // Reverse the number digit by digit
    digit = number % 10;        // Get the last digit
    reverse_number = reverse_number + digit * 10000L;        // Add it to the reverse number at the correct place
    number = number / 10;       // Remove the last digit

    digit = number % 10;        // Get the next digit
    reverse_number = reverse_number + digit * 1000;         // Add it to the reverse number
    number = number / 10;

    digit = number % 10;        // Get the third digit
    reverse_number = reverse_number + digit * 100;
    number = number / 10;

    digit = number % 10;        // Get the fourth digit
    reverse_number = reverse_number + digit * 10;
    number = number / 10;

    digit = number % 10;        // Get the last digit
    reverse_number = reverse_number + digit;

    if (initial_number == reverse_number)           // Compare the original and reversed numbers
    {
        printf("Given number and its reversed number are equal\n");         // Output if they are equal
    }
    else
    {
        printf("Given number and its reversed number are not equal\n");     // Output if they are not equal
    }

    return 0;           // End of program
}