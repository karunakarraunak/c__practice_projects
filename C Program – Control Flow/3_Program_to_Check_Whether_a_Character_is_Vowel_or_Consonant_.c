// Objective: Program to Check Whether a Character is Vowel or Consonant
// Created on: 12-05-2024
// Created by: luciferbloodfallen

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char character;

    printf("Enter a Character:\n");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("The Character is a Vowel\n");
        break;
    default:
        printf("The Character is a Consonant\n");
        break;
    }

    return 0;
}
