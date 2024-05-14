// Objective: Program to Print 1800 Rotation of Simple Pyramid
// Created on: 14-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
