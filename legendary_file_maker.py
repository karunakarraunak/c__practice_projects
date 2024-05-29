import os
import time

file_ls = ["C Program to Check Prime Number By Creating a Function",
"C Program to Display Prime Numbers Between Two Intervals Using Functions", 
"C Program to Find All Roots of a Quadratic Equation",
"C Program to Check Whether a Number can be Express as Sum of Two Prime Numbers",
"C Program to Find the Sum of Natural Numbers using Recursion ",
"C Program to Calculate the Factorial of a Number Using Recursion ",
"C Program to Find G.C.D Using Recursion",
"C Program to Reverse a Stack using Recursion",
"C Program to Calculate Power Using Recursion"]
  
crt_date = time.strftime("%d-%m-20%y")

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
        f.write(f"// Objective: \n// Created on: {crt_date}\n// Created by: luciferbloodfallen\n\n#include <stdio.h>\n\nint main()\n{{\n    return 0;\n}}\n")
