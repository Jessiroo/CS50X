#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
string convert_string(char input);

int main(void)
{
    string input = get_string("What is your message? ");
    int length = strlen(input);

    // string binary_array[length];

    for (int i = 0; i < length; i++)
    {
        // binary_array[i] = convert_string(input[i]);

        string binary = convert_string(input[i]);

        for (int j = 0; j < 8; j++)
        {
            print_bulb(binary[j]);
        }

        printf("\n");
    }
}

// char to binary function
string convert_string(char input)
{
    // create binary for character
    return "01001010";
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
