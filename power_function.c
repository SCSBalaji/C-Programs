/* Power function to calculate a raised to b */
// 15 October, 2024

/* Problem STatement:   Write a function power (a, b), to calculate the value of a raised to b. */

#include<stdio.h>
float power (float, int);           // Function prototype to calculate power
int main()
{
    float x, pow;
    int y;

    // Prompt user to input base and exponent
    printf("Enter two numbers:\t");
    scanf("%f %d",&x, &y);

    pow = power (x, y);         // Call the power function

    printf("%f to the power %d = %f\n",x, y, pow);          // Display the result

    return 0;
}

// Function to calculate a raised to b
float power (float x, int y)
{
    int i;
    float p = 1;

    // Loop to calculate power
    for ( i = 1; i <= y; i++)
    {
        p = p * x;
    }
    
    return (p);
}