#include <cs50.h>
#include <stdio.h>

// MINE
int main(void)
{
    int length;
    do
    {
        length = get_int("What is the length of the array? ");
    }
    while (length < 1);

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



// LECTURE VERSION
// int main(void)
// {
//     int length;
//     do
//     {
//         length = get_int("Length: ");
//     }
//     while (length < 1);

//     int twice[length];

//     twice[0] = 1;
//     printf("%i\n", twice[0]);

//     for (int i = 1; i < length; i++)
//     {
//         twice[i] = 2 * twice[i - 1];
//         printf("%i\n", twice[i]);
//     }
// }
