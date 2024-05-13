// Objective: Program to Find Largest Number Among Three Numbers
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number1, number2, number3, largest;

    printf("Enter the First Number:\n");
    scanf("%d", &number1);
    printf("Enter the Second Number:\n");
    scanf("%d", &number2);
    printf("Enter the Third Number:\n");
    scanf("%d", &number3);

    largest = number1 > number2 ? (number1 > number3 ? number1 : number3) : (number2 > number3 ? number2 : number3);

    printf("The Largest Number is %d\n", largest);

    return 0;
}
