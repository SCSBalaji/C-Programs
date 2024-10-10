/* Program to Determine Point's Position Relative to a Circle */
// 10 October, 2024

/* Problem Statement:   Given the coordinates (x, y) of center of a circle and its radius, 
write a program that will determine whether a point lies inside the circle, on the circle or outside the circle. 
(Hint: Use sqrt( ) and pow( ) functions)*/

// The center of the circle has been assumed to be at (0, 0)

#include<stdio.h>
int main()
{
    int radius, x, y;
    int squared_distance, squared_radius;

    // Input radius of the circle
    printf("Enter radius of circle:\t");
    scanf("%d",&radius);

    // Input coordinates of the point (x, y)
    printf("Enter coordinates of point (x, y):\t");
    scanf("%d %d",&x, &y);

    squared_distance = x * x + y * y;               // Calculate the squared distance from the point to the center of the circle

    squared_radius = radius * radius;               // Calculate the squared radius of the circle
    
    // Check if the point lies on, inside, or outside the circle
    if (squared_distance == squared_radius)
    {
        printf("Point is on the circle\n");
    }
    else
    {
        if (squared_distance > squared_radius)
        {
            printf("Point is outside the circle\n");
        }
        else
        {
            printf("Point is inside the circle\n");
        }
    }
    return 0;           // End of program
}