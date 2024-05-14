// Objective: Program to Print Given Triangle
// Created on: 14-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
