/* Program to Calculate Gross Salary Based on Basic Salary, Dearness Allowance, and House Rent Allowance */
// 13 September, 2024

/* Problem Statement:   Ramesh's basic salary is input throught the keyboard. 
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary.*/

#include<stdio.h>
int main()
{
    float basic_salary, dearness_allowance, house_rent_allowance, gross_pay;
    printf("Enter Basic Salary:\t");
    scanf("%f",&basic_salary);

    dearness_allowance = 0.4 * basic_salary;        // Calculate Dearness Allowance (40% of basic salary)
    house_rent_allowance = 0.2 * basic_salary;      // Calculate House Rent Allowance (20% of basic salary)
    gross_pay = basic_salary + dearness_allowance + house_rent_allowance;       // Calculate Gross Pay (sum of basic salary, dearness allowance, and house rent allowance)
    
    printf("Basic Salary = %f\n",basic_salary);
    printf("Dearness Allownace = %f\n",dearness_allowance);
    printf("House Rent Allowance = %f\n",house_rent_allowance);
    printf("Gross Salary is %f\n",gross_pay);

    return 0;
}