/* Program to Find the Absolute Value of a Number */
// 10 October, 2024

/* Problem Statement:   Write a program to find the absolute value of a number entered through the keyboard.*/

#include<stdio.h>
int main()
{
    int number;         // Declare variable to store the input number

    printf("Enter a number:\t");        // Input the number from the user
    scanf("%d",&number);

    // Check if the number is negative; if so, multiply by -1 to make it positive
    if (number < 0)
    {
        number = number * -1;
    }

    printf("The absolute value of given number is %d\n",number);        // Display the absolute value of the number

    return 0;           // End of program
}