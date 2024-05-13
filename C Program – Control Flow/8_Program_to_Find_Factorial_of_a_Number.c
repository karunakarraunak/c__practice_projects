// Objective: Program to Find Factorial of a Number
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, factorial = 1;

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("Factorial of %d is %d\n", n, factorial);

    return 0;
}
