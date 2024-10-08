/* Program to Calculate the Sum of the Digits of a Five-Digit Number */
// 08 October, 2024

/* Problem Statement:   If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits. (Hint: Use the modulus operator %) */

#include<stdio.h>
int main()
{
    int number, sum = 0, digit;         // Declare variables to store the number, sum of digits, and individual digits

    printf("Enter a Five Digits Number:\t");        // Prompt the user to enter a five-digit number
    scanf("%d",&number);        // Read the input number

    digit = number % 10;        // Extract the last digit using modulus operator
    sum = sum + digit;          // Add the extracted digit to the sum
    number = number / 10;       // Remove the last digit by dividing by 10

    digit = number % 10;        // Repeat the process for the next digit
    sum = sum + digit;
    number = number / 10;

    digit = number % 10;        // Continue for the third digit
    sum = sum + digit;
    number = number / 10;

    digit = number % 10;        // Continue for the fourth digit
    sum = sum + digit;
    number = number / 10;

    digit = number % 10;        // Finally, extract the fifth digit
    sum = sum + digit;

    printf("The Sum of Digits of given number is %d",sum);          // Output the sum of the digits
    return 0;       // End of program
}