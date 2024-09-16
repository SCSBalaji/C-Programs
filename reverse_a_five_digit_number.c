/* Program to Reverse a Five-Digit Number */
// 16 September, 2024

/* Problem Statemnt:    If a five-digit number is input through the keyboard, 
write a program to reverse the number. */

#include<stdio.h>
int main()
{
    int number, digit_1, digit_2, digit_3, digit_4, digit_5;        // Variable declarations
    long int reverse_number;        // Use long int for a bigger range of integers

    printf("Enter a Five Digit Number (Less than 32767):\t");       // Prompt the user to enter a five-digit number
    scanf("%d",&number);

    // Extract each digit from the number
    digit_5 = number % 10;      // Fifth Digit
    number = number / 10;       // Remaining Digits

    digit_4 = number % 10;      // Forth Digit
    number = number / 10;       // Remaining Digits

    digit_3 = number % 10;      // Third digit
    number = number / 10;       // Remaining Digits

    digit_2 = number % 10;      // Second digit
    number = number / 10;       // Remaining Digits

    digit_1 = number % 10;      // First digit

    // Construct the reversed number by multiplying and adding the digits
    reverse_number = digit_5 * 10000 + digit_4 * 1000 + digit_3 * 100 + digit_2 * 10 + digit_1;

    printf("The Reversed Number is %ld\n",reverse_number);      // Print the reversed number

    return 0;
}