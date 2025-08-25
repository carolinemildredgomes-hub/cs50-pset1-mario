#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // 1) Prompt for height until it’s 1–8
    int h;
    do
    {
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);

    // 2) Print h rows
    for (int row = 1; row <= h; row++)
    {
        // number of leading spaces is (h - row)
        for (int s = 0; s < h - row; s++)
        {
            printf(" ");
        }
        // number of hashes is row
        for (int hash = 0; hash < row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
