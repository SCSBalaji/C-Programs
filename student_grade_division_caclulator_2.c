/* Program to Calculate the Division Obtained by a Student */
// 18 September, 2024

/* Problem Statement:   The marks obtained by a student in 5 different subjects are input through the keyboard. 
The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 -Fail
Write a program to calculate the division obtained by the student. */

#include<stdio.h>
int main()
{
    float marks_1, marks_2, marks_3, marks_4, marks_5, percentage;          // Declare variables for the marks and percentage

    printf("Enter the Marks for 5 Subjects:\t");            // Prompt the user to enter the marks for 5 subjects
    scanf("%f %f %f %f %f",&marks_1, &marks_2, &marks_3, &marks_4, &marks_5);       // Read the marks entered by the user for 5 subjects

    percentage = (marks_1 + marks_2 + marks_3 + marks_4 + marks_5) * 100 / 500;         // Calculate the percentage based on total marks (sum of 5 subjects / total possible marks) * 100

    printf("Percentage = %f\n\n",percentage);       // Display the calculated percentage

    if (percentage >= 60)           // Check if the percentage qualifies for First Division
    {
        printf("First Division\n");         // Print First Division if percentage is 60 or above
    }
    else if (percentage >= 50 && percentage < 60)       // Check if the percentage qualifies for Second Division (between 50 and 59)
    {
        printf("Second Division\n");        // Print Second Division if percentage is between 50 and 59
    }
    else if (percentage >= 40 && percentage < 50)       // Check if the percentage qualifies for Third Division (between 40 and 49)
    {
        printf("Third Division\n");         // Print Third Division if percentage is between 40 and 49
    }
    else            // If none of the above conditions are met, the student has failed
    {
        printf("Fail");         // Print Fail if percentage is less than 40
    }
    
    return 0;           // Return 0 to indicate successful execution
}