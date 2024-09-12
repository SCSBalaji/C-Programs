/* Program to Print the First Letter of Each Word in a Sentence */

#include<stdio.h>
#include<string.h>      // for string functions
int main()
{
    char a[100];     
    int i;
    printf("Enter a Sentence :\t");
    gets(a);                                /* Because we are taking string as input. If we take scanf it will take only till the first blank space called NULL character only. It leaves all the remaining sentence.*/
    for ( i = 0; i < strlen(a); i++)        // Loop through the entire string
    {
        if (i == 0 && a[i] != ' ')          // Check if the first character is not a space, if not a space then print it
        {
            printf("%c ",a[i]);
        }
        else if (i > 0 && a[i] == ' ')      // Check if the current character is a space or not, if it is a space then print the next character after the space
        {
            printf("%c ",a[i + 1]);
        }
    }
    return 0;
}