import os
import time

file_ls = ["C Program to Print Simple Pyramid Pattern ",
"C Program to Print Given Triangle ",
"C Program to Print 1800 Rotation of Simple Pyramid",
"C Program to Print Inverted Pyramid ",
"C Program to Print Number Pattern",
"C Program to Print Character Pattern  ",
"C Program to Print Continuous Character Pattern",
"C Program to Print Hollow Star Pyramid",
"C Program to Print Inverted Hollow Star pyramid ",
"C Program to Print Hollow Star Pyramid in a Diamond Shape",
"C Program to Print Full Diamond Shape Pyramid",
"C Program to Print Pascal’s Pattern Triangle Pyramid ",
"C Program to Print Floyd’s Pattern Triangle Pyramid ",
"C Program to Print Reverse Floyd pattern Triangle Pyramid"]
  
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
