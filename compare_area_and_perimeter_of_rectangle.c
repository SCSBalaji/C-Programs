/* Program to Compare Area and Perimeter of a Rectangle */
// 10 October, 2024

/* Problem Statement:   Given the length and breadth of a rectangle, 
write a program to find whether the area of the rectangle is greater than its perimeter. 
For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.*/

#include<stdio.h>
int main()
{
    int length, breadth, perimeter, area;           // Declare variables for length, breadth, perimeter, and area

    printf("Enter the Length and Breadth of a Rectangle:\t");       // Input the length and breadth of the rectangle
    scanf("%d %d",&length, &breadth);

    perimeter = 2 * (length + breadth);         // Calculate the perimeter of the rectangle

    area = length * breadth;            // Calculate the area of the rectangle

    // Compare area and perimeter and display the result
    if (area > perimeter)
    {
        printf("Area is greater than Perimeter\n");
    }
    else
    {
        printf("Area is lesser than Perimeter\n");
    }
    
    return 0;           // End of program
}