// Objective: Program to Find Simple Interest
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float principal, rate, time, simple_interest;

    printf("Enter the Principal Amount:\n");
    scanf("%f", &principal);
    printf("Enter the Rate of Interest:\n");
    scanf("%f", &rate);
    printf("Enter the Time Period in years:\n");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;

    printf("The Simple Interest is: %f\n", simple_interest);

    return 0;
}
