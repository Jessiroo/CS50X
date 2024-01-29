#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
string[] convert_string()

int main(void)
{
    string input = get_string("What is your message? ");

    // TODO
    // get string
    // convert string to array of 8 bit binary numbers
    // loop over array of bit strings
        // loop over each bit in string feeding it into the print fn
        // at end of loop print line break
}

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
