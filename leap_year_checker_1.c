/* Program to Determine Whether a Year is a Leap Year or not */
// 11 October, 2024

/* Problem Statement:   A year is entered through the keyboard, 
write a program to determine whether the year is leap or not. 
Use the logical operators && and ||. */

#include<stdio.h>
int main()
{
    int year;           // Variable declaration to store the input year

    printf("Enter the year:\t");        // Prompt the user to enter the year
    scanf("%d",&year);

    // Check if the year is a leap year using logical operators
    if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not a Leap Year\n");
    }
    
    return 0;
}