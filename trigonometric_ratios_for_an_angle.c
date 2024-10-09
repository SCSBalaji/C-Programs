/* Program to Print Trigonometric Ratios of a Given Angle */
// 09 October, 2024

/* Problem Statement:   If value of an angle is input through the keyboard,
write a program to print all its Trigonometric ratios. */

#include<stdio.h>
#include<math.h>            // Include math.h for trigonometric functions
int main()
{
    float angle, s, c, t;       // Declare variables for the angle and its trigonometric ratios (sin, cos, tan)

    printf("Enter an angle in degrees: ");         // Prompt the user to input an angle in degrees
    scanf("%f",&angle);         // Read the angle from the user

    angle = angle * 3.14 / 180;         // Convert the angle from degrees to radians

    // Calculate the trigonometric ratios
    s = sin (angle);        // Calculate sine of the angle
    c = cos (angle);        // Calculate cosine of the angle
    t = tan (angle);        // Calculate tangent of the angle

    printf("Sin = %f\nCos = %f\nTan = %f",s,c,t);           // Output the calculated trigonometric ratios

    return 0;           // End of program
}