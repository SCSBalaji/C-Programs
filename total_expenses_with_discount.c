/* Program to Calculate Total Expenses with Discount Based on Quantity */
// 17 September, 2024

/* Problem Statement:   While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If quantity and price per item are input through the keyboard, write a program to calculate the total expenses.*/

#include<stdio.h>
int main()
{
    // Declare variables for quantity, discount, price, and total
    int quantity, discount;
    float price, total;

    printf("Enter the Quantity of the Item: \t");        // Prompt the user to enter the quantity of items
    scanf("%d",&quantity);
    printf("Enter the Price of the Each Item:\t");      // Prompt the user to enter the price of each item
    scanf("%f",&price);

    // Check if the quantity is greater than or equal to 1000 to apply a discount
    if (quantity >= 1000)
        discount = 10;      // 10% discount for orders of 1000 or more items
    else
        discount = 0;       // No discount for orders less than 1000 items

    total = (quantity * price) - (quantity * price * discount / 100);       // Calculate the total expenses after applying the discount
    
    printf("Total Expenses = %f",total);        // Output the total expenses

    return 0;
}