/* Roman numeral converter for a given year */
// 15 October, 2024

/* Problem Statement:   Define a function to convert any given year into its Roman equivalent.
Use these Roman equivalents for decimal numbers: 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M.

Example:
Roman equivalent of 1988 is MDCCCCLXXXVIII
Roman equivalent of 1525 is MDXXV.
*/

#include<stdio.h>
int romanise (int, int, char);          // Function prototype to convert year to Roman numeral
int main()
{
    int year;

    // Prompt user to input a year
    printf("Enter Year:\t");
    scanf("%d",&year);

    // Call the romanise function for each Roman numeral
    year = romanise (year, 1000, 'M');
    year = romanise (year, 500, 'D');
    year = romanise (year, 100, 'C');
    year = romanise (year, 50, 'L');
    year = romanise (year, 10, 'X');
    year = romanise (year, 5, 'V');
    year = romanise (year, 1, 'I');

    return 0;
}

// Function to print the Roman numeral equivalent
int romanise (int y, int k, char ch)
{
    int i, j;

    j = y / k;          // Calculate how many times the Roman numeral should be repeated

    // Print the Roman numeral j times
    for ( i = 1; i <= j; i++)
    {
        printf("%c",ch);
    }
    
    return (y % k);         // Return the remainder to process the next Roman numeral
}