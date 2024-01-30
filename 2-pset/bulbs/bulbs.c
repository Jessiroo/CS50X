#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string input = get_string("What is your message? ");
    int length = strlen(input);

    

    // for (int i = 0; i < length; i++)
    // {
    //     int binary[8];

    //     for (int j = 0; j < 8; j++)
    //     {
    //         int bit = binary[j];
    //         printf("%i\n", bit);
    //     }

    //     printf("\n");
    // }
}

// printing bulbs function
void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
