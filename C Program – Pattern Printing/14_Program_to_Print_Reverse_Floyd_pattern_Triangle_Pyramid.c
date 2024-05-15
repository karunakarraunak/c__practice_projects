// Objective: Write a C program to print reverse Floyd pattern triangle pyramid.
// Created on: 15-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int max_val(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n, num;

    printf("Enter number of rows: \n");
    scanf("%d", &n);

    num = max_val(n);

    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ", num--);
        }
        
        printf("\n");
    }
    
    return 0;
}
