// Objective: Program to Add Two Complex Numbers
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

typedef struct complex_num
// A typedef to define a struct to be used in fnctions directly.
{
    // A struct to define real and inaginary part of a complex number.
    int real;
    int imaginary;
} complex;

complex add_complex(complex num1, complex num2)
// A complex type function that takes two complex nums and returns their sum
{
    complex sum;

    // Addind real and imaginary parts of the nums.
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;

    return sum;
}

int main(int argc, char const *argv[])
{
    complex a, b, sum;

    // Declaring real and img parts of the numbers to be added.
    a.real = 5;
    a.imaginary = 2;
    b.real = -3;
    b.imaginary = 2;

    sum = add_complex(a, b);

    printf("a = %d +%di\n", a.real, a.imaginary);
    printf("b = %d +%di\n", b.real, b.imaginary);

    printf("(%d + %di) + (%d + %di) = %d + %di\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);

    return 0;
}
