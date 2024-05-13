// Objective: Program to Reverse a Number
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, reverse = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    while (num != 0)
    {
        reverse *= 10;
        reverse += num % 10;
        num /= 10;
    }

    printf("Reversed number: %d\n", reverse);

    return 0;
}
