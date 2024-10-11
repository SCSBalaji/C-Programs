/* Program to Calculate Simple Interest for Multiple Sets of Input Values Using a for Loop */
// 11 October,2024

/* Problem Statement:   We wish to calculate simple interest for 3 sets of values 
of principle amount, number of years and rate of interest using for loop. */
#include<stdio.h>
int main()
{
    // Variable declarations for storing the principal amount, number of years, rate of interest, and simple interest
    int principle_amount, number_of_years, count;
    float rate_of_interest, simple_interest;

    // Using a for loop to calculate simple interest for 3 sets of inputs
    for ( count = 1; count <= 3; count = count + 1)
    {
        // Prompt the user to enter the principal amount, number of years, and rate of interest
        printf("Enter the principle amount, number of years, rate of interest:\t");
        scanf("%d %d %f",&principle_amount, &number_of_years, &rate_of_interest);

        simple_interest = principle_amount * number_of_years * rate_of_interest / 100;      // Calculate simple interest
        
        printf("Simple Interest = Rs. %f\n",simple_interest);       // Output the calculated simple interest
    }
    
    return 0;
}