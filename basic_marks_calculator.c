/* Program to Calculate Aggregate and Percentage of Marks for 5 Subjects */
// 13 Septeber, 2024

/* Problem Statement:   If the marks obtained by a student in five different subjects are input through the keyboard, 
write a program to find out the aggregate(total) marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/

#include<stdio.h>
int main()
{
    int marks1, marks2, marks3, marks4, marks5, aggregate;
    float percentage;
    printf("Enter the marks of 5 subjects:\t");
    scanf("%d %d %d %d %d",&marks1, &marks2, &marks3, &marks4, &marks5);

    aggregate = marks1 + marks2 + marks3 + marks4 + marks5;     // Calculate the aggregate marks (sum of all subject marks)
    percentage = aggregate / 5.0;     // Calculate the percentage (aggregate divided by 5). Use 5.0 to ensure floating-point division

    printf("Aggregate Marks = %d\n",aggregate);
    printf("Percentage Marks = %.2f\n",percentage);            // Display percentage with 2 decimal places
    
    return 0;
}