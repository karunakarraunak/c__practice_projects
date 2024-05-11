// Objective: Program to Swap Two Numbers
// Created on: 11-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 5, b = 73;

    printf("Before Swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapping:\n");
    printf("a = %d\nb = %d\n", a, b);

    return 0;
}
