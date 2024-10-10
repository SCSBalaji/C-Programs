/* Program to Check if Three Points are Co-linear */
// 10 October, 2024

/* Problem Statement:   Given three points (x1, y1), (x2, y2) and (x3, y3), 
write a program to check if the three points fall on one straight line.*/

#include<stdio.h>
#include<math.h>
int main()
{
    // Variables to store the coordinates
    int x1, y1, x2, y2, x3, y3, slope_1, slope_2, slope_3;

    // Input coordinates of the first point
    printf("Enter the value of x1 and y1 coordinates of first point:\t");
    scanf("%d %d",&x1, &y1);

    // Input coordinates of the second point
    printf("Enter the value of x2 and y2 coordinates of first point:\t");
    scanf("%d %d",&x2, &y2);

    // Input coordinates of the third point
    printf("Enter the value of x3 and y3 coordinates of first point:\t");
    scanf("%d %d",&x3, &y3);

    // Calculate the slopes between the points
    slope_1 = abs (x2 - x1) / abs (y2 - y1);
    slope_2 = abs (x3 - x1) / abs (y3 - y1);
    slope_3 = abs (x3 - x2) / abs (y3 - y2);

    // Check if all slopes are equal
    if ((slope_1 == slope_2) && (slope_1 == slope_3))
    {
        printf("Points are Co-linear\n");
    }
    else
    {
        printf("Points are Not Co-linear\n");
    }
    
    return 0;           // End of program
}