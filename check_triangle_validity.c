/* Program to Check Whether a Triangle is Valid or Not */
// 10 October, 2024

/* Problem Statement:   Write a program to check whether a triangle is valid or not, 
if three angles of the triangle are entered through the keyboard. 
A triangle is valid if the sum of all the three angles is equal to 180 degrees.*/

#include<stdio.h>
int main()
{
    float angle_1, angle_2, angle_3;            // Declare variables to store the three angles of the triangle

    // Input the three angles of the triangle
    printf("Enter the three angles of the triangle:\t");
    scanf("%f %f %f",&angle_1, &angle_2, &angle_3);

    // Check if the sum of the three angles equals 180 degrees
    if ((angle_1 + angle_2 + angle_3) == 180)
    {
        printf("The Triangle is a Valid Triangle\n");           // The triangle is valid
    }
    else
    {
        printf("The Triangle is Not a Valid Triangle\n");       // The triangle is not valid
    }
    return 0;           // End of program
}