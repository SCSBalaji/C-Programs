/* Program to Check the Position of a Point on Axes*/
// 10 October, 2024

/* Problem Statement:   Given a point (x, y), write a program to find out if it lies on x-axis, y-axis or origin.*/

#include<stdio.h>
int main()
{
    int x, y;           // Variable declaration for x and y coordinates
    
    // Prompt the user to enter the x and y coordinates of a point
    printf("Enter the x and y coordinates of a point:\t");
    scanf("%d %d",&x, &y);

    if (x == 0 && y == 0)           // Check if the point lies on the origin
    {
        printf("The Point lies on origin\n");
    }
    else
    {
        if (x == 0 && y != 0)           // Check if the point lies on the Y-axis
        {
            printf("Point lies on Y axis\n");
        }
        else
        {
            if (x != 0 && y == 0)           // Check if the point lies on the X-axis
            {
                printf("Point lies on X axis\n");
            }
            else            // Point lies neither on any axis nor on the origin
            {
                printf("Point neither lies on any axis, nor on origin\n");
            }
        }
    }
    return 0;
}