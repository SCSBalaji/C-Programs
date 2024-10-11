/* Program to Check Whether a Triangle is Valid Based on Side Lengths */
// 11 October, 2024

/* Problem Statement:   If the lengths of three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. 
The triangle is valuid if the sum of two sides is greater than the largest of the three sides. */

#include<stdio.h>
int main()
{
    int side_1, side_2, side_3, largest_side, sum;      // Variable declarations for storing the sides and the largest side

    // Prompt the user to enter the three sides of the triangle
    printf("Enter three sides of the triangle:\t");
    scanf("%d %d %d",&side_1, &side_2, &side_3);

    // Determine the largest side and the sum of the other two sides
    if (side_1 > side_2)
    {
        if (side_1 > side_3)
        {
            sum = side_2 + side_3;
            largest_side = side_1;
        }
        else
        {
            sum = side_1 + side_2;
            largest_side = side_3;
        }
    }
    else
    {
        if (side_2 > side_3)
        {
            sum = side_1 + side_3;
            largest_side = side_2;
        }
        else
        {
            sum = side_1 + side_2;
            largest_side = side_3;
        }
    }

    // Check if the sum of two sides is greater than the largest side
    if (sum > largest_side)
    {
        printf("The Triangle is a Valid Triangle\n");
    }
    else
    {
        printf("The Triangle is Not a Valid Triangle\n");
    }
    
    return 0;
}