/* Program to Calculate the Smallest Number of Notes for a Given Amount */
// 16 September, 2024

/* Problem Statement:   Consider a currency system in which there are notes of six denominations, 
namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. 
If a sum of Rs. N is entered through the keyboard, 
write a program to compute the smallest number of notes that will combine to give Rs. N.*/

#include<stdio.h>
int main()
{
    int amount, one, two, five, ten, fifty, hundred, total;         // Variable declarations for different denominations and total notes

    printf("Enter the Amount:\t");          // Prompt the user to enter an amount
    scanf("%d",&amount);

    hundred = amount / 100;         // Calculate the number of 100 notes
    amount = amount % 100;          // Remaining amount

    fifty = amount / 50;            // Calculate the number of 50 notes
    amount = amount % 50;           // Remaining amount
    
    ten = amount / 10;              // Calculate the number of 10 notes
    amount = amount % 10;           // Remaining amount

    five = amount / 5;              // Calculate the number of 5 notes
    amount = amount % 5;            // Remaining amount

    two = amount / 2;               // Calculate the number of 2 notes
    amount = amount % 2;            // Remaining amount

    one = amount / 1;               // Calculate the number of 1 notes
    amount = amount % 1;            // Remaining amount

    total = hundred + fifty + ten + five + two + one;       // Sum up the total number of notes and coins

    printf("Smallest Number of Notes = %d\n",total);        // Output the smallest number of notes and coins required

    return 0;
}