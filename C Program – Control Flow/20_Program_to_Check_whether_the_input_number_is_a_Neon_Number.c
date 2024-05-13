// Objective: Program to Check whether the input number is a Neon Number
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, sq, sum = 0, temp;

    printf("Enter a number:\n");
    scanf("%d", &num);

    sq = num * num;
    temp = sq;

    while (temp != 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    if (sum == num)
    {
        printf("%d is a Neon Number\n", num);
    }
    else
    {
        printf("%d is not a Neon Number\n", num);
    }

    return 0;
}
