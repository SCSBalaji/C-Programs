/* Square of a floating-point number using a function */
// 15 October, 2024

/* Problem Statement:   Write a program to obtain the square of a floating-point number using a function. */

#include<stdio.h>
float square (float);       // Function prototype to calculate the square of a number
int main()
{
    float a, b;

    // Prompt user for input
    printf("Enter any number:\t");
    scanf("%f",&a);

    b = square (a);         // Call the square function

    printf("Square of %f is %f\n",a,b);         // Display the result

    return 0;
}

// Function to calculate the square of a floating-point number
float square (float x)
{
    float y;
    y = x * x;
    return (y);
}