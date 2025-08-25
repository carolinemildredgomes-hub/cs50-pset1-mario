#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1) Prompt for height 1–8
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // 2) Print two pyramids, gap of 2 spaces
    for (int row = 1; row <= h; row++)
    {
        // left pyramid: spaces then hashes
        for (int s = 0; s < h - row; s++)
        {
            printf(" ");
        }
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        // gap
        printf("  ");

        // right pyramid: hashes only
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }

        printf("\n");
    }
}
