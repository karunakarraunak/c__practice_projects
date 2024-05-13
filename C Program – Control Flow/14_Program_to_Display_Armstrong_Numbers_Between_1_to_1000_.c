// Objective: Program to Display Armstrong Numbers Between 1 to 1000
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
    int num, temp, num_of_digits = 0, result = 0;

    for (int i = 1; i <= 1000; i++)
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
