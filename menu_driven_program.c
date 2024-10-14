/* Menu driven program */
// 14 October, 2024

/* Problem Statement:   Write a menu driven program which has following options: 
1. FActorial of a number
2. Prime or not
3. Odd or even
4. Exit
Once the menu item is selected the appropriate action should be taken and once this action is finished,
the menu should reappear. Unless the user selects the 'Exit' option the program should continue to work.
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice, number, i, factorial;

    while (1)
    {
        // Displaying menu options
        printf("\n1. Factorial\n");
        printf("2. Prime\n");
        printf("3. Odd / Even\n");
        printf("4. Exit\n");

        // User inputs their choice
        printf("Enter your choice:\t");
        scanf("%d",&choice);

        // Switch case to handle different options
        switch (choice)
        {
        case 1:         // Factorial of a number
            printf("Enter a number:\t");
            scanf("%d",&number);

            factorial = 1;

            for ( i = 1; i <= number; i++)
            {
                factorial = factorial * i;
            }
            
            printf("Factorail value = %d\n",factorial);
            break;

        case 2:         // Check if the number is prime
            printf("Enter a number:\t");
            scanf("%d",&number);

            for ( i = 2; i <= number; i++)
            {
                if (number % i == 0)
                {
                    printf("Not a Prime Number\n");
                    break;
                }
            }
            
            if (i == number)
            {
                printf("Prime Number\n");
            }
            break;

        case 3:         // Check if the number is odd or even
            printf("Enter a number:\t");
            scanf("%d",&number);

            if (number % 2 == 0)
            {
                printf("Even Number\n");
            }
            else
            {
                printf("Odd Number\n");
            }
            break;

        case 4:         // Exit the program
            exit(0);
        
        default:            // Invalid choice handling
            printf("Wrong Choice!\a\n");
        }
    }
    
    return 0;
}