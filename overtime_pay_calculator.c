/*Program to Calculate Overtime Pay of 10 Employees */
// 11 October, 2024

/* Problem Statement:   Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above 40 hours.
Assume taht employees do not work for fractional part of an hour. */

#include<stdio.h>
int main()
{
    // Variable declarations for storing overtime pay, hours worked, and iteration count
    float over_time_pay;
    int hour, i = 1;

    // Loop to calculate overtime pay for 10 employees
    while (i <= 10)
    {
        // Prompt the user to enter the number of hours worked
        printf("Enter number of hours worked:\t");
        scanf("%d",&hour);

        // Calculate overtime pay for hours above 40
        if (hour >= 40)
        {
            over_time_pay = (hour - 40) * 120.00;
        }
        else
        {
            over_time_pay = 0;
        }

        // Output the hours worked and overtime pay
        printf("Hours = %d\nOvertime pay = Rs. %f\n",hour,over_time_pay);

        // Increment the counter to move to the next employee
        i++;
    }
    
    return 0;
}