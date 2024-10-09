/* Program to Calculate Wind-Chill Factor */
// 9 October, 2024

/* Problem Statement:   Wind-chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill temperature is always lower than the air temperature, and is calculated as per the following formula:

wcf = 35.74 + 0.6215t + (0.427t - 35.75) * v^0.16 

where t is temperature and v is wind velocity.
Write a program to receive values of t and v and calculate wind-chill factor (wcf) */

#include<stdio.h>
#include<math.h>            // Include math.h for the power function
int main()
{
    float temperature, velocity, wind_chill_factor;         // Declare variables for temperature, wind velocity, and wind-chill factor

    printf("Enter values of temperature and velocity:   ");         // Prompt the user to enter the temperature and wind velocity
    scanf("%f %f",&temperature,&velocity);          // Read temperature and velocity values from the user

    wind_chill_factor = 35.74 + 0.6215 * temperature + (0.4275 * temperature - 35.75) * pow (velocity, 0.16f);      // Calculate wind-chill factor using the provided formula

    printf("Wind Chill Factor = %f\n",wind_chill_factor);           // Output the calculated wind-chill factor

    return 0;           // End of program
}