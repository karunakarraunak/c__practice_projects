// Objective: Program to Check Whether a Number is Prime or Not
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, is_prime = 1;

    printf("Enter a number: \n");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            is_prime = 0;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither prime nor composite.\n");
    }
    else if (is_prime == 1)
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
