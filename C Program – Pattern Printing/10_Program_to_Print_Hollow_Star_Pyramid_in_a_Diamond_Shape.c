// Objective: Write a C program to print hollow star pyramid in a diamond shape.
// Created on: 15-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main()
{
    int n = 5;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * (n - i) - 3; j++)
        {
            if (j == 0 || j == 2 * (n - i) - 4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
