// Objective: Program to Generate Multiplication Table
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Enter a number:\n");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
