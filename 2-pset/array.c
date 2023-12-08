#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int length = get_int("What is the length of the array? ");

    int array[length];

    for (int i = 0, value = 1; i < length; i++)
    {
        array[i] = value;
        value = value x 2;
    }
}
