/* Basic Simple Interest Calculaor*/
// 12 September, 2024

#include<stdio.h>
int main()
{
    int principle_amount;                               // Declare variable for principle amount
    float time, rate_of_interest, simple_interest;      // Declare variables for time, rate of interest, and simple interest
    printf("Enter Principle Amount :\t");
    scanf("%d",&principle_amount);
    printf("Enter Time :\t");
    scanf("%f",&time);
    printf("Enter Rate of Interest :\t");
    scanf("%f",&rate_of_interest);
    simple_interest = principle_amount * time * rate_of_interest/100;       // Calculate simple interest using the formula: (P * T * R) / 100
    printf("%f\n",simple_interest);
    return 0;
}