/* Program to Find the Factorial of a Number */
// 11 October, 2024

/* Problem Statement:   Write a program to find the factorial value of any number entered through the keyboard. */

#include<stdio.h>
int main()
{
    // Variable declarations for the number, factorial, and loop counter
    int number, i, factorial;

    // Prompt the user to enter a number
    printf("Enter the number:\t");
    scanf("%d",&number);

    // Initialize factorial and loop counter
    factorial = i = 1;

    // Loop to calculate the factorial of the entered number
    while (i <= number)
    {
        factorial = factorial * i;
        i++;
    }
    
    // Output the calculated factorial
    printf("Factorial Value of %d = %d\n",number, factorial);

    return 0;
}