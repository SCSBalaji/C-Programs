/* Program to determine whether a driver should be insured based on marital status, sex, and age */
// 19 September, 2024

/* Problem Statement:   A company insures its drivers in the following cases:
- If the driver is married.
- If the driver is unmarried, male & above 30 years of age.
- If the driver is unmarried, female & above 25 years of age.
In all other cases, the driver is not insured. If the marital status, sex and age of the driver are the inputs, 
write a program to determine whether the driver should be insured or not. */

#include<stdio.h>
int main()
{
    // Declare variables to store the driver's marital status, sex, and age
    char marital_status, sex;
    int age;

    printf("Enter age, sex ('M' or 'F'), marital status ('M' or 'U'):\t");      // Prompt the user to enter the driver's age, sex, and marital status
    scanf("%d %c %c", &age, &sex, &marital_status);         // Read the age, sex ('M' for male, 'F' for female), and marital status ('M' for married, 'U' for unmarried) from the user input

    // Check if the driver is eligible for insurance based on the given conditions
    // Condition 1: Driver is married. 
    // Condition 2: Driver is unmarried, male, and above 30 years old
    // Condition 3: Driver is unmarried, female, and above 25 years old
    if ((marital_status == 'M') || (marital_status == 'U' && sex == 'M' && age > 30) || (marital_status == 'U' && sex == 'F' && age > 25))
    {
        printf("Driver should be insured\n");           // If any of the conditions are true, the driver is eligible for insurance
    }
    else
    {
        printf("Driver should not be insured\n");       // If none of the conditions are met, the driver is not eligible for insurance
    }
    
    return 0;           // Return 0 to indicate successful execution
}