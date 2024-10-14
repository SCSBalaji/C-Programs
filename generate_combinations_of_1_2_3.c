/* Generate all possible combinations of 1 2 3 */
// 14 October, 2024

/* Problem Statement:   Write a program to generate all combinations of 1, 2 and 3 using for loop. */

#include<stdio.h>
int main()
{
    int i, j, k;

    // Loop through all possible values for i, j, and k
    for ( i = 1; i <= 3; i++)
    {
        for ( j = 1; j <= 3; j++)
        {
            for ( k = 1; k <= 3; k++)
            {
                printf("%d %d %d\n",i, j, k);           // Print each combination of i, j, and k
            }
        }
    }
    
    return 0;
}