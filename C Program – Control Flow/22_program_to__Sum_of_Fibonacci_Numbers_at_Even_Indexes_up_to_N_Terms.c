// Objective: Program to Sum of Fibonacci Numbers at Even Indexes up to N Terms
// Created on: 14-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, a = 0, b = 1, c = 0, sum = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    printf("Fibonacci Numbers at Even Indexes up to %d Terms are: \n", num);

    for (int i = 1; i < num + 1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d ", a);
            sum += a;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of Fibonacci Numbers at Even Indexes up to %d Terms is: %d\n", num, sum);

    return 0;
}
