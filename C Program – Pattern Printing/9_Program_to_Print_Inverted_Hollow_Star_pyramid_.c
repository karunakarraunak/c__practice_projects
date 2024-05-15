// Objective: Program to Print Inverted Hollow Star pyramid
// Created on: 15-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i || i == n - 1)
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
