import os
import time

file_ls = ["C Program to Check Whether a Number is Positive, Negative, or Zero",
"C Program to Check Whether Number is Even or Odd",
"C Program to Check Whether a Character is Vowel or Consonant ",
"C Program to Find Largest Number Among Three Numbers",
"C Program to Calculate Sum of Natural Numbers ",
"C Program to Print Alphabets From A to Z Using Loop",
"C Program to Check Leap Year",
"C Program to Find Factorial of a Number",
"C Program to Make a Simple Calculator ",
"C Program to Generate Multiplication Table ",
"C Program to Print Fibonacci Series",
"C Program to Find LCM of Two Numbers",
"C Program to Check Armstrong Number",
"C Program to Display Armstrong Numbers Between 1 to 1000 ",
"C Program to Display Armstrong Number Between Two Intervals ",
"C Program to Reverse a Number",
"C Program to Check Whether a Number is a Palindrome or Not ",
"C Program to Check Whether a Number is Prime or Not",
"C Program to Display Prime Numbers Between Intervals",
"C Program to Check whether the input number is a Neon Number",
"C Program to Find All Factors of a Natural Number",
"C program to  Sum of Fibonacci Numbers at Even Indexes up to N Terms"]
  
crt_time = time.strftime("%d-%m-20%y")

for ind, file in enumerate(file_ls, 1):
    new_file = f"{ind}"
    for i, st in enumerate(file):
        if(i == 0):
            continue
        elif(st == " "):
            new_file += "_"
        else:
            new_file += st
    new_file += ".c"
    with open(new_file, 'w') as f:
        f.write(f"// Objective: \n// Created on: {crt_time}\n// Created by: luciferbloodfallen\n\n#include <stdio.h>\n\nint main()\n")
