/* Program to Calculate and Print Paper Sizes from A0 to A8 */
// 15 September, 2024

/* Problem Statement:   Paper of size A0 has dimensions 1189 mm x 841 mm.
Each subsequent size A(n) is defined as A(n-1) cut in half, parallel to its shorter sides.
Write a program to calculate and print paper sizes A0, A1, A2,...A8.*/

#include<stdio.h>
int main()
{
    // Variable declarations for heights and widths of papers A0 to A8
    int a0_height, a0_width;
    int a1_height, a1_width, a2_height, a2_width, a3_height, a3_width, a4_height, a4_width;
    int a5_height, a5_width, a6_height, a6_width, a7_height, a7_width, a8_height, a8_width;

    // Initialize A0 paper dimensions
    a0_height = 1189;
    a0_width = 841;
    printf("Size of A0 paper\nHeight = %d\nWidth = %d\n\n",a0_height,a0_width);

    // Calculate and display sizes for A1 papers
    a1_height = a0_width;
    a1_width = a0_height/2;
    printf("Size of A1 paper\nHeight = %d\nWidth = %d\n\n",a1_height,a1_width);

    // Calculate and display sizes for A2 papers
    a2_height = a1_width;
    a2_width = a1_height/2;
    printf("Size of A2 paper\nHeight = %d\nWidth = %d\n\n",a2_height,a2_width);

    // Calculate and display sizes for A3 papers
    a3_height = a2_width;
    a3_width = a2_height/2;
    printf("Size of A3 paper\nHeight = %d\nWidth = %d\n\n",a3_height,a3_width);

    // Calculate and display sizes for A4 papers
    a4_height = a3_width;
    a4_width = a3_height/2;
    printf("Size of A4 paper\nHeight = %d\nWidth = %d\n\n",a4_height,a4_width);

    // Calculate and display sizes for A5 papers
    a5_height = a4_width;
    a5_width = a4_height/2;
    printf("Size of A5 paper\nHeight = %d\nWidth = %d\n\n",a5_height,a5_width);

    // Calculate and display sizes for A6 papers
    a6_height = a5_width;
    a6_width = a5_height/2;
    printf("Size of A6 paper\nHeight = %d\nWidth = %d\n\n",a6_height,a6_width);

    // Calculate and display sizes for A7 papers
    a7_height = a6_width;
    a7_width = a6_height/2;
    printf("Size of A7 paper\nHeight = %d\nWidth = %d\n\n",a7_height,a7_width);

    // Calculate and display sizes for A8 papers
    a8_height = a7_width;
    a8_width = a7_height/2;
    printf("Size of A8 paper\nHeight = %d\nWidth = %d\n\n",a8_height,a8_width);

    return 0;
}