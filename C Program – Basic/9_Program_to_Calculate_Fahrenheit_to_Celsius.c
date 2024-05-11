// Objective: Program to Calculate Fahrenheit to Celsius
// Created on: 11-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float temp;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &temp);

    printf("Temperature in Celsius: %f\n", (temp - 32) * 5 / 9);

    return 0;
}
