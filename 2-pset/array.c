#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("What is the length of the array? ");

    int array[length];

    for (int i = 0, value = 1; i < length; i++)
    {
        array[i] = value;
        value = value * 2;
    }

    printf("[");
    for (int i = 0; i < length; i++)
    {
        if (i == length - 1)
        {
            printf(" %i", array[i]);
        }
        else
        {
            printf(" %i,", array[i]);
        }
    }
    printf("]\n");
}
