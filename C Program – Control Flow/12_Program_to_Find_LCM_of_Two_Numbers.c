// Objective: Program to Find LCM of Two Numbers
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (max % num1 == 0 && max % num2 == 0)
        {
            printf("LCM of %d and %d is %d\n", num1, num2, max);
            break;
        }

        max++;
    }

    return 0;
}
