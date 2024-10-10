/* Program to Determine the Day on 1st January of a Given Year */
// 10 October, 2024

/* Probelem Statement:  According to Gregorian calendar, it was Monday on the date 01/01/01. 
If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/

#include<stdio.h>
int main()
{
    // Variable declarations
    int leap_days, first_day, year;
    long int normal_days, total_days;

    // Prompt the user to enter the year
    printf("Enter Year:\t");
    scanf("%d",&year);

    normal_days = ( year - 1) * 365L;       // Calculate total normal days (non-leap) from year 01 to the input year

    leap_days = ( year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;      // Calculate the number of leap days

    total_days = normal_days + leap_days;           // Calculate the total days by adding normal days and leap days

    first_day = total_days % 7;             // Calculate the first day of the year by taking the remainder when divided by 7

    // Output the day corresponding to the remainder
    if (first_day == 0)
    {
        printf("Monday\n");
    }

    if (first_day == 1)
    {
        printf("Tuesday\n");
    }

    if (first_day == 2)
    {
        printf("Wednesday\n");
    }

    if (first_day == 3)
    {
        printf("Thursday\n");
    }

    if (first_day == 4)
    {
        printf("Friday\n");
    }

    if (first_day == 5)
    {
        printf("Saturday\n");
    }

    if (first_day == 6)
    {
        printf("Sunday\n");
    }
    
    return 0;
}