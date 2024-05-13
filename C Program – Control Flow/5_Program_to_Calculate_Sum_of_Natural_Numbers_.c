// Objective: Program to Calculate Sum of Natural Numbers
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number, sum = 0;

    printf("Enter a Number:\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }

    printf("The Sum of Natural Numbers from 1 to %d is %d\n", number, sum);

    return 0;
}
