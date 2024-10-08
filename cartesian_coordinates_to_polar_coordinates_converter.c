/* Program to Convert Cartesian Co-ordinates to Polar Co-ordinates */
// 08 October, 2024

/* Problem Statement:   Write a program to receive Cartesian co-ordinates (x,y) of a point
and convert them into polar co-ordinates (r,φ)
Hint:   r = sqrt(x^2 + y^2) and φ = tan^-1 (y / x)
*/

#include<stdio.h>
#include<math.h>            // Include math.h for mathematical functions
int main()
{
    float x, y, r, theta;       // Declare variables for Cartesian coordinates, polar radius (r), and angle (theta)

    printf("Enter the x and y co-ordinates of a point:\t");     // Prompt the user to enter the Cartesian coordinates (x, y)
    scanf("%f %f",&x,&y);       // Read the values of x and y

    r = sqrt(x * x + y * y);        // Calculate the radius using r = sqrt(x^2 + y^2)

    theta = atan2 (y,x);            // Calculate the angle using theta = tan^-1(y / x)
    theta = theta * 180 / 3.14;     // Convert the angle from radians to degrees

    printf("The Polar co-ordinates of the given point are\nr = %f\ntheta = %f",r, theta);       // Display the polar coordinates (r and theta)
    
    return 0;           // End of program
}