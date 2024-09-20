/* Program to determine employee salary based on gender, years of service, and qualifications */
// 20 September, 2024

/* Problem Statement:   Write a program to calculate the salary as per the following table:
Gender      Years of Services       Qualifications          Salary

Male        >= 10                   Post-Graduate           11000
            >= 10                   Graduate                10000
            < 10                    Post-Graduate           10000
            < 10                    Graduate                7000

Female      >= 10                   Post-Graduate           12000
            >= 10                   Graduate                9000
            < 10                    Post-Graduate           10000
            < 10                    Graduate                6000
*/

#include<stdio.h>
int main()
{
    // Declare variables for gender, qualification, years of service, and salary
    char gender, qualification;
    int year_of_service, salary;

    printf("Enter Gender ('M' or 'F'), Years of Service, Qualification ('G' or 'P'):\t");          // Prompt the user to enter the gender, years of service, and qualification
    scanf("%c %d %c",&gender, &year_of_service, &qualification);                // Read input values for gender, years of service, and qualification from the user

    // Conditions to determine the salary based on the gender, years of service, and qualification
    if (gender == 'M' && year_of_service >= 10 && qualification == 'P')             // Male with >= 10 years of service and Post-Graduate
    {
        salary = 11000;
    }
    // Male with >= 10 years of service and Graduate // Male with < 10 years of service and Post-Graduate
    else if (gender == 'M' && year_of_service >= 10 && qualification == 'G' || gender == 'M' && year_of_service < 10 && qualification == 'P')       
    {
        salary = 10000;
    }
    else if (gender == 'M' && year_of_service < 10 && qualification == 'G')         // Male with < 10 years of service and Graduate
    {
        salary = 7000;
    }
    else if (gender == 'F' && year_of_service >= 10 && qualification == 'P')        // Female with >= 10 years of service and Post-Graduate
    {
        salary = 12000;
    }
    else if (gender == 'F' && year_of_service >= 10 && qualification == 'G')        // Female with >= 10 years of service and Graduate
    {
        salary = 9000;
    }
    else if (gender == 'F' && year_of_service < 10 && qualification == 'P')         // Female with < 10 years of service and Post-Graduate
    {
        salary = 10000;
    }
    else if (gender == 'F' && year_of_service < 10 && qualification == 'G')         // Female with < 10 years of service and Graduate
    {
        salary = 6000;
    }
    
    printf("\nSalary of Employee = %d\n",salary);           // Display the calculated salary of the employee

    return 0;           // Return 0 to indicate successful execution
}