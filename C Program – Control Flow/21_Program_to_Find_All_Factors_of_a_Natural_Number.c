// Objective: Program to Find All Factors of a Natural Number
// Created on: 14-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Factors of %d are: \n", num);

    for (int i = 1; i < num + 1; i++)
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
