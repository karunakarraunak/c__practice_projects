// Objective: Program to Display Armstrong Number Between Two Intervals.
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

double pow(double x, double y)
{
    double result = 1;
    for (int i = 0; i < y; i++)
    {
        result *= x;
    }
    return result;
}

int main(int argc, char const *argv[])
{
    int num, temp, num_of_digits = 0, result = 0, ll, ul;

    printf("Enter the lower limit: ");
    scanf("%d", &ll);
    printf("Enter the upper limit: ");
    scanf("%d", &ul);

    for (int i = ll; i <= ul; i++)
    {
        num = i;
        temp = num;

        while (temp != 0)
        {
            temp /= 10;
            num_of_digits++;
        }

        temp = num;

        while (temp != 0)
        {
            result += pow(temp % 10, num_of_digits);
            temp /= 10;
        }

        if (num == result)
        {
            printf("%d ", num);
        }

        result = 0;
        num_of_digits = 0;
    }

    return 0;
}