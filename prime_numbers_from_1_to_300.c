/* Generate all prime numbers from 1 to 300 */
// 14 October, 2024

/* Problem Statement:   Write a program to print all prime numbers from 1 to 300 */

#include<stdio.h>
int main()
{
    int i, number;

    printf("Prime numbers between 1 and 300 are : \n");        // Display message

    // Loop through numbers from 1 to 300
    for ( number = 2; number <= 300; number++)
    {
        // Assume current number is prime
        for ( i = 2; i < number; i++)
        {
            // Check if number is divisible by any other number
            if (number % i == 0)
            {
                break;          // If divisible, it's not a prime number
            }
        }

        // If loop completes and i equals number, it's a prime number
        if (i == number)
        {
            printf("%d\t",number);      // Print the prime number
        }
    }

    return 0;
}