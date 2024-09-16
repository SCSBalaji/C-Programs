/* Program to Calculate the Area of a Triangle using Heron's Formula */
// 16 September, 2024

/* Problem Statement:   If lengths of three sides of a triangle are inputs through the keyboard, 
write a program to find the area of the triangle. */

#include<stdio.h>
#include<math.h>        // for the sqrt function
int main()
{
    float side_1, side_2, side_3, semi_perimeter, area;         // Variable declarations for the sides of the triangle, semi-perimeter and area

    printf("Enter the Length of Sides of a Triangle:\t");       // Prompt the user to enter the lengths of the three sides of the triangle
    scanf("%f %f %f", &side_1, &side_2, &side_3);

    semi_perimeter = (side_1 + side_2 + side_3)/2;              // Calculate the semi-perimeter of the triangle

    // Use Heron's formula to calculate the area of the triangle
    area = sqrt(semi_perimeter * (semi_perimeter - side_1) * (semi_perimeter - side_2) * (semi_perimeter - side_3));

    printf("Area of Triangle is %f\n",area);            // Output the calculated area of the triangle

    return 0;
}