#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // create height value
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // create loop for printing blocks
    for (int i = 1; i <= height; i++)
    {
        // first block set
        for (int j = 0; j < height; j++)
        {
            if (j < height - i)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("  ");

        // second block set
        for (int j = height; j > 0; j--)
        {
            if (j > height - i)
            {
                printf("#");
            }
        }

        printf("\n");
    }
}
