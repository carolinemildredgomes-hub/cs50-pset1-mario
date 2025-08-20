
# CS50 Pset1 — Mario

This repository contains my solutions for CS50’s Problem Set 1: Mario.

## Mario (Less)

Right-aligned pyramid of height `1–8`.

### Code
```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int row = 1; row <= h; row++)
    {
        for (int s = 0; s < h - row; s++)
        {
            printf(" ");
        }
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}






Height: 4
   #
  ##
 ###
####





#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    for (int row = 1; row <= h; row++)
    {
        for (int s = 0; s < h - row; s++)
        {
            printf(" ");
        }
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("  ");

        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}











Height: 4
   #  #
  ##  ##
 ###  ###
####  ####
















