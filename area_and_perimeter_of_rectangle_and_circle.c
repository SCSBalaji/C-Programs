/* Program to Calculate Area and Perimeter of a Rectangle and Area and Circumference of a Circle */
// 15 September, 2024

/* Problem Statement:   The length and breadth of a rectangle and radius of a circle are inputs through the keyboard. 
Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle. */

#include<stdio.h>
int main()
{
    // Variable declarations
    int length, breadth, radius, area_of_rectangle, perimeter;
    float area_of_circle, circumference;

    printf("Enter the Length and Breadth of Rectangle:\t");     // Prompt the user to enter the length and breadth of the rectangle
    scanf("%d %d",&length,&breadth);

    // Calculate area and perimeter of the rectangle
    area_of_rectangle = length * breadth;
    perimeter = 2 * (length + breadth);

    // Output the area and perimeter of the rectangle
    printf("Area of Rectangle is %d\n",area_of_rectangle);
    printf("Perimeter of Rectangle is %d\n",perimeter);

    // Prompt the user to enter the radius of the circle
    printf("Enter the Radius of Circle:\t");
    scanf("%d",&radius);

    // Calculate area and circumference of the circle
    area_of_circle = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Output the area and circumference of the circle
    printf("Area of Circle is %f\n",area_of_circle);
    printf("Circumference of Circle is %f\n",circumference);

    return 0;
}