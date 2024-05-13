// Objective: Program to Print Alphabets From A to Z Using Loop
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Alphabets from A to Z are:\n");

    for (char character = 'A'; character <= 'Z'; character++)
    {
        printf("%c ", character);
    }

    printf("\n");

    return 0;
}
