// Objective: Program to Check Whether a Number is Prime or Not
// Created on: 11-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, prime = 1;

    printf("Enter the Number:\n");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (n == 1)
    {
        printf("1 is neither Prime nor Composite\n");
    }
    else if (prime == 0)
    {
        printf("%d is not a Prime Number\n", n);
    }
    else
    {
        printf("%d is a Prime Number\n", n);
    }

    return 0;
}
