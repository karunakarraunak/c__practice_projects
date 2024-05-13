// Objective: Program to Check Whether a Number is Positive, Negative, or Zero
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter a Number:\n");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("The Number is Positive\n");
    }
    else if (number < 0)
    {
        printf("The Number is Negative\n");
    }
    else
    {
        printf("The Number is Zero\n");
    }

    return 0;
}
