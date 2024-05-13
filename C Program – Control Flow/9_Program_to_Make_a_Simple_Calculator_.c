// Objective: Program to Make a Simple Calculator
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char operator;
    float num1, num2;

    printf("Enter an operator (+, -, *, /):\n");
    scanf("%c", &operator);

    printf("Enter two numbers:\n");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Error! Operator is not correct\n");
        break;
    }

    return 0;
}
