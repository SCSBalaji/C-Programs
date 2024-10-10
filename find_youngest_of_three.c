/* Program to Determine the Youngest Among Ram, Shyam, and Ajay */
// 10 October, 2024

/* Problem Statement:   If ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/

#include<stdio.h>
int main()
{
    int ram, shyam, ajay;           // Declare variables to store the ages of Ram, Shyam, and Ajay

    // Input the ages of Ram, Shyam, and Ajay from the user
    printf("Enter the age of Ram:\t");
    scanf("%d",&ram);

    printf("Enter the age of Shyam:\t");
    scanf("%d",&shyam);

    printf("Enter the age of Ajay:\t");
    scanf("%d",&ajay);

    // Compare the ages to determine the youngest
    if (ram < shyam)
    {
        if (ram < ajay)
        {
            printf("Ram is younger than Shyam and Ajay");       // Ram is the youngest
        }
        else
        {
            printf("Ajay is younger than Ram and Shyam");       // Ajay is the youngest
        }
    }
    else
    {
        if (shyam < ajay)
        {
            printf("Shyam is younger than Ram and Ajay");       // Shyam is the youngest
        }
        else
        {
            printf("Ajay is younger than Ram and Shyam");       // Ajay is the youngest
        }
    }
    return 0;           // End of program
}