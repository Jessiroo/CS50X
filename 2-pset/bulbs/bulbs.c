#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
int[] convert_binary(int decimal);

int main(void)
{
    string input = get_string("What is your message? ");
    int length = strlen(input);

    int byte_array[length];

    for (int i = 0; i < length; i++)
    {
        int decimal = (int) input[i];
        printf("%i\n", decimal);
        
        // input decimal into conversion fn for getting binary array set to value
    }

    // loop over each value in byte array
        // loop over each bit value and print
        // at end of each byte print line break
}

// binary conversion fn
int[] convert_binary(int decimal)
{

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
