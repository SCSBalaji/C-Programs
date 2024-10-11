/* Program to Find the Power of One Number Raised to Another */
// 11 October, 2024

/* Problem Statement:   Two numbers are entered through the keyboard.
Write a program to find the value of one number raised to the power of another. */

#include<stdio.h>
int main()
{
    // Variable declarations for the base (x), exponent (y), and the resulting power
    float x, power;
    int y, i;

    // Prompt the user to enter two numbers (base and exponent)
    printf("Enter two numbers:\t");
    scanf("%f %d",&x, &y);

    // Initialize power and loop counter
    power = i = 1;

    // Loop to calculate the power (x^y)
    while (i <= y)
    {
        power *= x;
        i++;
    }
    
    // Output the result of x raised to the power of y
    printf("%f to the power %d is %f\n",x, y, power);

    return 0;
}