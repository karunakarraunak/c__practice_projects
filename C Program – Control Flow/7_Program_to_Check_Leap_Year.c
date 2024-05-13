// Objective: Program to Check Leap Year
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year;

    printf("Enter a Year:\n");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("The Year is a Leap Year\n");
    }
    else
    {
        printf("The Year is not a Leap Year\n");
    }
    return 0;
}
