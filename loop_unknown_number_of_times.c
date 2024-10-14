/* Execution of a loop an unknown number of times */
// 14 October, 2024

#include<stdio.h>
int main()
{
    char another;
    int number;

    // Loop will run as long as the user enters 'Y' or 'y'
    do
    {
        // Input: Accept a number from the user
        printf("Enter a number:\t");
        scanf("%d",&number);

        printf("Square of %d is %d\n",number, number * number);         // Output: Display the square of the entered number
        
        printf("Want to enter another number:\t(Y/N)\n");           // Ask user if they want to input another number
        fflush(stdin);          // Clearing the input buffer before taking character input
        scanf(" %c",&another);      // Space before %c to avoid capturing newline from previous input

    } while (another == 'Y' || another == 'y');         // Condition to continue loop
    
    return 0;
}