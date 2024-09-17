/* Program to check if a given year is a leap year */
// 17 September, 2024

/* Problem Statement:   Any year is input through the keyboard.
Write a program to determine whether the year is a leap year or not. */

#include<stdio.h>
int main()
{
    int year;           // Declare an integer variable to hold the year

    printf("Enter a Year:\t");          // Prompt the user to enter a year
    scanf("%d",&year);              // Read the input year from the user

    if (year % 100 == 0)            // Check if the year is divisible by 100
    {
        if (year % 400 == 0)        // If year is divisible by 400, it is a leap year
        {
            printf("Leap Year\n");      // Output message if it's a leap year
        }
        else
        {
            printf("Not a Leap Year\n");        // Output message if it's not a leap year
        }        
    }
    else            // If year is not divisible by 100, check if it is divisible by 4
    {
        if (year % 4 == 0)          // If year is divisible by 4, it is a leap year
        {
            printf("Leap Year\n");          // Output message if it's a leap year
        }
        else
        {
            printf("Not a Leap Year\n");        // Output message if it's not a leap year
        }
    }
    
    return 0;           // Return 0 to indicate successful execution
}