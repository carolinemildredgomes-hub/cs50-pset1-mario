# CS50 Mario (Less & More)

![C](https://img.shields.io/badge/language-C-blue)
![CS50](https://img.shields.io/badge/CS50-Harvard-red)

## Description

A C program that prints pyramids of variable height, inspired by the Mario video game. Includes both the half-pyramid ("less") and full-pyramid ("more") versions. Users input the height, and the program prints the corresponding pyramid.

---

## How to Compile and Run

1. Download `mario.c` from this repository.  
2. Open a terminal and navigate to the folder containing `mario.c`.  
3. Compile the program:

```bash
gcc -o mario mario.c cs50.c

Run the program:

./mario
Enter the height when prompted.

Example

Half-pyramid (Less)


Height: 4
   #
  ##
 ###
####

Full-pyramid (More)


Height: 4
   #  #
  ##  ##
 ###  ###
####  ####

Key Notes / Learning Outcomes

Uses loops and nested loops to create patterns.

Validates user input to ensure height is positive.

Demonstrates formatting output in a structured way.

Helps understand iteration, conditional statements, and problem decomposition.

Teaches how to manage user input and dynamic output in C.



