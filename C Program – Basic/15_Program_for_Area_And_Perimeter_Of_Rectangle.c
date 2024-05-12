// Objective: Program for Area And Perimeter Of Rectangle
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float length, breadth, area, perimeter;

    printf("Enter the Length of the Rectangle:\n");
    scanf("%f", &length);
    printf("Enter the Breadth of the Rectangle:\n");
    scanf("%f", &breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("The Area of the Rectangle is: %f\n", area);
    printf("The Perimeter of the Rectangle is: %f\n", perimeter);

    return 0;
}
