/* Program to Check Whether a Number is Prime or not */
// 13 October, 2024

/* Problem Statement:   Write a program to determine whether a number is prime or not.
A prime number is said to be prime if it is divisible only by 1 or itself. */

#include<stdio.h>
int main()
{
    int number, i;          // Variable declarations for storing the number and loop counter

    // Prompt the user to enter a number
    printf("Enter a number:\t");
    scanf("%d",&number);

    i = 2;          // Initialize the loop counter starting from 2 (smallest prime factor)

    while (i <= number - 1)         // Loop to check if the number is divisible by any value between 2 and (number - 1)
    {
        if (number % i == 0)        // If the number is divisible by 'i', it is not prime
        {
            printf("Not a Prime Number\n");
            break;
        }
        i++;            // Increment the counter to check the next divisor
    }
    
    // If the loop completes without finding a divisor, the number is prime
    if (i == number)
    {
        printf("Prime Number\n");
    }

    return 0;
}