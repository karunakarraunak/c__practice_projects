// Objective: Program to Check Whether a Number is a Palindrome or Not
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, temp, reverse = 0;

    printf("Enter a number:\n");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        reverse *= 10;
        reverse += temp % 10;
        temp /= 10;
    }

    if (num == reverse)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
