// Objective: Program to Check Armstrong Number
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>
// #include <math.h>

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

    printf("Enter a number:\n");
    scanf("%d", &num);

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
        printf("%d is an Armstrong Number\n", num);
    }
    else
    {
        printf("%d is not an Armstrong Number\n", num);
    }
    

    return 0;
}
