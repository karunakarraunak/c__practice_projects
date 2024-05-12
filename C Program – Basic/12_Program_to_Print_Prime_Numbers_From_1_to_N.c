// Objective: Program to Print Prime Numbers From 1 to N
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, is_prime = 1;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
                break;
            }
            else
            {
                is_prime = 1;
            }
        }

        if (is_prime == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
