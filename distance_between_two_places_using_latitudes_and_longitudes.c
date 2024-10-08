/* Program to Calculate Distance Between Two Places on Earth Using Latitude and Longitude */
// 08 October, 2024

/* Problem Statement:   Write a program to receive values of latitude (L1, L2)
and longitude (G1, G2), in degrees, of two places on the earth 
and output the distance (D) between them in nautical miles.
The formula for distance in nautical miles is:
D = 3963 cos^-1 (sin L1 sin L2 + cos L1 cos L2 * cos (G2 - G1)) */

#include<stdio.h>
#include<math.h>        // Include math.h for mathematical functions
int main()
{
    float latitude1, latitude2, longitude1, longitude2, distance;       // Declare variables for latitudes, longitudes, and distance

    printf("Enter the Latitude and Longitude of Place-1:\t");           // Prompt the user to enter the latitude and longitude for Place-1
    scanf("%f %f",&latitude1,&longitude1);          // Read values for latitude1 and longitude1

    printf("Enter the Latitude and Longitude of Place-2:\t");           // Prompt the user to enter the latitude and longitude for Place-2
    scanf("%f %f",&latitude2,&longitude2);          // Read values for latitude2 and longitude2

    // Convert latitude and longitude from degrees to radians
    latitude1 = latitude1 * 3.14 / 180;         // Convert latitude1 to radians
    latitude2 = latitude2 * 3.14 / 180;         // Convert latitude2 to radians
    longitude1 = longitude1 * 3.14 / 180;       // Convert longitude1 to radians
    longitude2 = longitude2 * 3.14 / 180;       // Convert longitude2 to radians

    // Calculate the distance between the two places using the provided formula
    distance = 3963 * acos (sin (latitude1) * sin (latitude2) + cos (latitude1) * cos (latitude2) * cos (longitude2 - longitude1));

    // Output the distance between Place-1 and Place-2
    printf("Distance between Place-1 and Place-2 is: %f",distance);

    return 0;       // End of program
}