import os
import time

file_ls = ["C Program to Print Simple Pyramid Pattern "]
  
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
        f.write(f"// Objective: \n// Created on: {crt_time}\n// Created by: luciferbloodfallen\n\n#include <stdio.h>\n\nint main()\n{{\n    return 0;\n}}\n")
