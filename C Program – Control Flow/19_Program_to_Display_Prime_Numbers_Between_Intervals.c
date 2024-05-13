// Objective: Program to Display Prime Numbers Between Intervals.
// Created on: 13-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, ll, ul, is_prime;

    printf("Enter the lower limit:\n");
    scanf("%d", &ll);
    printf("Enter the upper limit:\n");
    scanf("%d", &ul);

    printf("Prime numbers between %d and %d are:\n", ll, ul);

    for (n = ll; n <= ul; n++)
    {
        if (n == 0 || n == 1)
        {
            continue;
        }

        is_prime = 1;

        for (int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%d ", n);
        }
    }

    return 0;
}
