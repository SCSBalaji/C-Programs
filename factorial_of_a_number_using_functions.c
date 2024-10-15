/* Program to Find the Factorial of a Number using functions */
// 15 October, 2024

/* Problem Statement:   Write a function to calculate the factorial value of any integer entered through the keyboard. */

#include<stdio.h>
int fact(int);          // Function prototype to calculate factorial
int main()
{
    int number, factorial;

    // Prompt user for input
    printf("Enter a number:\t");
    scanf("%d",&number);

    factorial = fact(number);           // Call the factorial function

    printf("Factorial of %d = %d\n",number, factorial);         // Display the result

    return 0;
}

// Function to calculate factorial of a number
int fact(int number)
{
    int i, factorial = 1;

    // Loop to calculate factorial
    for ( i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }

    return (factorial);
}