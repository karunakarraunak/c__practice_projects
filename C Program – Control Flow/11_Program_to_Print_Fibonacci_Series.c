// Objective: Program to Print Fibonacci Series
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, fib = 0, a = 0, b = 1;

    printf("Enter the Number of Terms:\n");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    printf("%d %d ", a, b);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        fib = a + b;
        a = b;
        b = fib;
    }

    printf("\n");

    return 0;
}
