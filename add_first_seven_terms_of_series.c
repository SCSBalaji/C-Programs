/* Add first seven terms of the series 1/1! + 2/2! + 3/3! + ... */
// 14 October, 2024

/* Problem Statement:   Write a program to add first seven terms of the following series using a for loop.
1/1! + 2/2! + 3/3! + ............. */

#include<stdio.h>
int main()
{
    int i, j;
    float factorial, sum = 0.0;

    // Loop through the first 7 terms of the series
    for ( i = 1; i <= 7; i++)
    {
        factorial = 1.0;

        // Calculate factorial of i (i!)
        for ( j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }

        // Add the current term i/i! to the sum
        sum = sum + i / factorial;
    }
    
    // Display the sum of the series
    printf("Sum of series = %f\n",sum);

    return 0;    
}