/* Program to Calculate Gross Salary Based on Basic Salary */
// 17 September, 2024

/* Problem Statement:   In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary.
If the employee's salary is input through the keyboard write a program to find his gross salary. */

# include<stdio.h>
int main()
{
    // Declare variables for basic salary, dearness allowance, house rent allowance, and gross salary
    float basic_salary, dearness_allowance, house_rent_allowance, gross_salary;

    printf("Enter Basic Salary:\t");        // Prompt the user to enter basic salary
    scanf("%f",&basic_salary);              // Read the input from the user

    // Calculate house rent allowance (HRA) and dearness allowance (DA) based on basic salary
    if (basic_salary < 1500)        // If basic salary is less than 1500
    {
        house_rent_allowance = basic_salary * 10 / 100;         // HRA is 10% of basic salary
        dearness_allowance = basic_salary * 90 / 100;           // DA is 90% of basic salary
    }
    else            // If basic salary is 1500 or more
    {
        house_rent_allowance = 500;         // HRA is fixed at 500
        dearness_allowance = basic_salary * 98 / 100;       // DA is 98% of basic salary
    }

    gross_salary = basic_salary + house_rent_allowance + dearness_allowance;        // Calculate gross salary by adding basic salary, HRA, and DA

    printf("Gross Salary = %f\n",gross_salary);             // Output the gross salary

    return 0;    
}