#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // user string input
    string input = get_string("What is your message? ");
    int length = strlen(input);

    // iterate over each character in string
    for (int i = 0; i < length; i++)
    {
        int decimal = (int) input[i];
        int byte[BITS_IN_BYTE];

        // convert character to binary
        for (int j = BITS_IN_BYTE - 1; j >= 0; j--)
        {
            if (decimal == 0)
            {
                byte[j] = 0;
            }
            else if (decimal % 2 == 0)
            {
                byte[j] = 0;
                decimal = decimal / 2;
            }
            else
            {
                byte[j] = 1;
                decimal = (decimal - 1) / 2;
            }

        }

        // print binary output
        for (int k = 0; k < BITS_IN_BYTE; k++)
        {
            print_bulb(byte[k]);
        }
        printf("\n");
    }
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
