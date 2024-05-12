// Objective: Program to Find Compound Interest
// Created on: 12-05-2024
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
    float principal, rate, time, compound_interest;

    printf("Enter the Principal Amount:\n");
    scanf("%f", &principal);
    printf("Enter the Rate of Interest:\n");
    scanf("%f", &rate);
    printf("Enter the Time Period in years:\n");
    scanf("%f", &time);

    compound_interest = principal * (pow((1 + rate / 100), time)) - principal;

    printf("The Compound Interest is: %f\n", compound_interest);

    return 0;
}
