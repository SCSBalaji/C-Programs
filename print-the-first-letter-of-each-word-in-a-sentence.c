/* Program to Print the First Letter of Each Word in a Sentence */
// 11 September, 2024

#include<stdio.h>
#include<string.h>      // for string functions
int main()
{
    char a[100];        // Array to hold the input sentence
    int i;

    printf("Enter a Sentence :\t");         // Prompt the user to enter a sentence
    gets(a);                                /* Because we are taking string as input. If we take scanf it will take only till the first blank space called NULL character only. It leaves all the remaining sentence.*/
    
    for ( i = 0; i < strlen(a); i++)        // Loop through the entire string
    {
        if (i == 0 && a[i] != ' ')          // Check if the first character is not a space, if not a space then print it
        {
            printf("%c ",a[i]);
        }
        else if (i > 0 && a[i] == ' ')      // Check if the current character is a space or not, if it is a space then print the next character after the space
        {
            printf("%c ",a[i + 1]);         // Print the next character after the space
        }
    }
    return 0;
}