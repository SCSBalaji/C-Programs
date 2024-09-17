/* Profit or Loss Calculation Based on Cost Price and Selling Price */
// 17 September, 2024

/* Problem Statemant:   If cost price and selling price of an item is input through the keyboard, 
write a program to determine whether the seller has made profit or incurred loss.
Also determine how much profit he made or loss he incurred. */

#include<stdio.h>
int main()
{
    float cost_price, selling_price, profit, loss;      // Declare variables for cost price, selling price, profit, and loss

    printf("Enter the Cost Price and the Selling Price:\t");        // Prompt the user to input cost price and selling price
    scanf("%f %f", &cost_price, &selling_price);            // Read the values of cost price and selling price from the user

    profit = selling_price - cost_price;        // Calculate profit by subtracting cost price from selling price
    loss = cost_price - selling_price;          // Calculate loss by subtracting selling price from cost price

    if (profit > 0)         // Check if the profit is greater than 0 (indicating a profit was made)
    {
        printf("The Seller has made a Profit of Rs. %f\n",profit);      // Print the profit amount
    }
    if (loss > 0)           // Check if the loss is greater than 0 (indicating a loss was incurred)
    {
        printf("The Seller has made a Loss of Rs. %f\n",loss);          // Print the loss amount
    }
    if (profit == 0)        // Check if profit is equal to 0 (no profit, no loss)
    {
        printf("There is NO Profit, NO Loss\n");        // Print a message indicating no profit or loss
    }
    
    return 0;               // Return 0 to indicate successful program termination 
}