/* Program to Convert Temperature from Fahrenheit to Centigrade */
// 13 September, 2024

/* Problem Statement: Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees*/

#include<stdio.h>
int main()
{
    float fahrenheit, centigrade;           // Variable declaration
    printf("Enter the temperature in Fahrenheit:\t");       // Prompt the user to enter temperature in Fahrenheit
    scanf("%f",&fahrenheit);                // Read the input temperature in Fahrenheit

    centigrade = 5.0/9.0 * (fahrenheit - 32);       // Convert the temperature from Fahrenheit to Centigrade

    printf("The Temperature in degree Centigrade is %f",centigrade);        // Output the converted temperature in Centigrade
}