// Objective: Program to Print Continuous Character Pattern
// Created on: 15-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main()
{
    int n;
    char character = 'A';

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%c", character);

            character++;
        }

        printf("\n");
    }

    return 0;
}
