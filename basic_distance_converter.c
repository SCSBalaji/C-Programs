/* Program to Convert Distance from Kilometers to Meters, Centimeters, Feet, and Inches */
// 13 September, 2024

/* Problem statement:   The distance between two cities (in kilometers) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimeters. */

#include<stdio.h>
int main()
{
    float kilometer, meter, feet, inch, centimeter;
    printf("Enter the distance in Kilometers:\t");
    scanf("%f",&kilometer);

    meter = kilometer * 1000;           // Convert the distance from kilometers to meters
    centimeter = meter * 100;           // Convert the distance from meters to centimeters
    inch = centimeter / 2.54;           // Convert the distance from centimeters to inches
    feet = inch / 12;                   // Convert the distance from inches to feet
    

    printf("The Distance in meter = \t %f meters\n",meter);
    printf("The Distance in centimeter = \t %f centimeters\n",centimeter);
    printf("The Distance in feet = \t %f feet\n",feet);
    printf("The Distance in inch = \t %f inch\n",inch);
    
    return 0;
}