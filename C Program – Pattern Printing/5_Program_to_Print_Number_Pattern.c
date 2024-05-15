// Objective: Program to Print Number Pattern
// Created on: 15-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", j + 1 + i);
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d", j + i);
        }

        printf("\n");
    }

    return 0;
}
