/* Program to Interchange Contents of Two Variables */
// 09 October, 2024

/* Problem Statement:   Two numbers are input through the keyboard into two locations C and D.
Write a program to interchange the contents of C and D. */

#include<stdio.h>
int main()
{
    int c, d, temp;         // Declare variables for the numbers and a temporary variable to hold the value during interchange

    // Input values for C and D
    printf("Enter the Number at Location C:   ");
    scanf("%d",&c);         // Read the value for C
    printf("Enter the Number at Location D:   ");
    scanf("%d",&d);         // Read the value for D

    // Interchange the values of C and D using a temporary variable
    temp = c;
    c = d;
    d = temp;

    // Display the new values after interchange
    printf("New Number at Location C = %d\n",c);
    printf("New Number at Location D = %d\n",d);

    return 0;       // End of program
}