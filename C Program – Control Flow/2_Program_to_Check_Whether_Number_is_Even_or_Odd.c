// Objective: Program to Check Whether Number is Even or Odd
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;

    printf("Enter a Number:\n");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The Number is Even\n");
    }
    else
    {
        printf("The Number is Odd\n");
    }
    
    return 0;
}

